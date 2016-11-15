#include "requestinterceptor.h"

void RequestInterceptor::interceptRequest(QWebEngineUrlRequestInfo & info)
{
    // Intercepting the requested URL
    QUrl url = info.requestUrl();
    qDebug() << "Request URL in interceptRequest: " << url;

    emit redirectUrlCapture(url);

    // Optionally redirect the request URL but it only works for requests
    // without payload data such as GET ones
    //info.redirect(QUrl("https://www.google.com"));

    // Set HTTP header
    /*QByteArray httpHeaderName = "SomeHeaderName";
    QByteArray httpHeaderValue = "SomeHeaderValue";
    info.setHttpHeader(httpHeaderName, httpHeaderValue);*/
}

