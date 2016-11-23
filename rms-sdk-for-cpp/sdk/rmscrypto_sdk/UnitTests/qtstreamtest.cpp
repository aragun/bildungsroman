#include <iostream>
#include <sstream>
#include "qtstreamtest.h"

using namespace std;

void qtstreamtest::test1() {
//    QSharedPointer<QDataStream> stream (&out);
    auto sOut = new QSharedPointer<QDataStream>();
    auto qstream = QTStreamImpl::Create(*sOut);

    // Write the data
    //qstream->Write("Hello World",12);
//    auto backingStdStream = make_shared<stringstream>(
//      ios::in | ios::out | ios::binary);
//    auto backingStream =
//      CreateStreamFromStdStream(static_pointer_cast<iostream>(backingStdStream));
//    auto cryptoStream = CreateCryptoStreamWithAutoKey(cipherMode,
//                                                      csKeyName,
//                                                      backingStream);

//    // encrypt
//    cryptoStream->Write(pbIn->data(), pbIn->size());
//    cryptoStream->Flush();

//    // return result
//    auto resStr = backingStdStream->str();
    cout<<"=================== QTSTREAM ==================="<<endl;

}
