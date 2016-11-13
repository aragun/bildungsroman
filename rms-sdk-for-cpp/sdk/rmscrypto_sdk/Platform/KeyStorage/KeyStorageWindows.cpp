/*
 * ======================================================================
 * Copyright (c) Microsoft Open Technologies, Inc.  All rights reserved.
 * Licensed under the MIT License.
 * See LICENSE.md in the project root for license information.
 * ======================================================================
 */

#include "KeyStorageWindows.h"
#include "../../CryptoAPI/RMSCryptoExceptions.h"
#include <Windows.h>

using namespace std;
namespace rmscrypto {
namespace platform {
namespace keystorage {
void KeyStorageWindows::RemoveKey(const string& csKeyWrapper) {
    char * error;
    string sqlDelete = "DELETE FROM MSIPCKeyStorage WHERE csKeyWrapper = '" + csKeyWrapper +"';";
    int rc = sqlite3_exec(db, sqlDelete.c_str(), NULL, NULL, &error);
}

void KeyStorageWindows::StoreKey(const string& csKeyWrapper,
                                 const string& csKey) {
    char * error;
    string sqlInsert = "INSERT INTO MSIPCKeyStorage VALUES('"+csKeyWrapper +"','"+csKey+"');";
    int rc = sqlite3_exec(db, sqlInsert.c_str(), NULL, NULL, &error);
}

shared_ptr<string>KeyStorageWindows::LookupKey(const string& csKeyWrapper) {
    char * error;
    string sqlLookup = "SELECT csKey FROM MSIPCKeyStorage WHERE csKeyWrapper ='" + csKeyWrapper + "';";
    char **results = NULL;
    int rows, columns;
    sqlite3_get_table(db, sqlLookup.c_str(), &results, &rows, &columns, &error);
    return rows >=1 && columns >= 1 ? shared_ptr<string>(new string(results[1])) : nullptr;
}

std::shared_ptr<IKeyStorage>IKeyStorage::Create() {
    return std::shared_ptr<KeyStorageWindows>(new KeyStorageWindows);
}

} // namespace keystorage
} // namespace platform
} // namespace rmscrypto
