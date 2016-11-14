#include "storageaccesswindows.h"
#include <Windows.h>

using namespace std;

// Global static pointer used to ensure a single instance of the class.
StorageAccessWindows* StorageAccessWindows::m_pInstance = NULL;

/** This function is called to create an instance of the class.
    Calling the constructor publicly is not allowed. The constructor
    is private and is only called by this Instance function.
*/

StorageAccessWindows* StorageAccessWindows::Instance()
{
   if (!m_pInstance)   // Only allow one instance of class to be generated.
      m_pInstance = new StorageAccessWindows;

   return m_pInstance;
}

StorageAccessWindows::StorageAccessWindows()
{
    //Fetch environment variable %localappdata%
    //Check if db folder exists
    //If not, create and encrypt

    char * error;
    int rc = sqlite3_open("C:/MSIPC/MyDb.db", &db);
    const char *sqlCreateTable = "CREATE TABLE MSIPCKeyStorage (csKeyWrapper STRING PRIMARY KEY, csKey STRING);";
    rc = sqlite3_exec(db, sqlCreateTable, NULL, NULL, &error);
}

void StorageAccessWindows::StoreKey(const string& csKeyWrapper,
                                    const string& csKey) {
       char * error;
       string sqlInsert = "INSERT INTO MSIPCKeyStorage VALUES('"+csKeyWrapper +"','"+csKey+"');";
       int rc = sqlite3_exec(db, sqlInsert.c_str(), NULL, NULL, &error);
}

std::shared_ptr<std::string> StorageAccessWindows::LookupKey(const string& csKeyWrapper) {
    char * error;
    string sqlLookup = "SELECT csKey FROM MSIPCKeyStorage WHERE csKeyWrapper ='" + csKeyWrapper + "';";
    char **results = NULL;
    int rows, columns;
    sqlite3_get_table(db, sqlLookup.c_str(), &results, &rows, &columns, &error);
    return rows >=1 && columns >= 1 ? shared_ptr<string>(new string(results[1])) : nullptr;
}

void StorageAccessWindows::RemoveKey(const string& csKeyWrapper) {
    char * error;
    string sqlDelete = "DELETE FROM MSIPCKeyStorage WHERE csKeyWrapper = '" + csKeyWrapper +"';";
    int rc = sqlite3_exec(db, sqlDelete.c_str(), NULL, NULL, &error);
}
