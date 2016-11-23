#ifndef QTSTREAMTEST_H
#define QTSTREAMTEST_H

#include <QTest>
#include "../../rms_sdk/ModernAPI/ext/QTStreamImpl.h"
#include "../CryptoAPI/IStream.h"

class qtstreamtest : public QObject
{
    Q_OBJECT

private Q_SLOTS:

  void test1();
};

#endif // QTSTREAMTEST_H
