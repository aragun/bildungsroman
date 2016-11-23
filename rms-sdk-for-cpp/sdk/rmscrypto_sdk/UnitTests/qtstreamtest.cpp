#include "../../rms_sdk/ModernAPI/ext/QTStreamImpl.h"
#include <iostream>
#include "qtstreamtest.h"

using namespace std;

void qtstreamtest::test1() {
    QFile file("C://users//admuller//desktop//file.txt");
    file.open(QIODevice::ReadWrite);
    QDataStream out(&file);

//    out << (quint32)0xA0B0C0D0;
//    out << (qint32)123;

//    out.setVersion(QDataStream::Qt_5_7);
    //QSharedPointer<QDataStream> stream (&out);
    auto qstream = QTStreamImpl::Create(std::shared_ptr<QDataStream>(out));

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
