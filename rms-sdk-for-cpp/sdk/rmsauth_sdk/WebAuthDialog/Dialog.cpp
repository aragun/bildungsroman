#include "dialog.h"
#include "ui_dialog.h"
#include "RequestInterceptor.h"
#include <QWebEngineProfile>

Dialog::Dialog(const QString& requestUrl, const QString& redirectUrl, bool useCookie, QWidget *parent)
    : QDialog(parent)
    , mUi(new Ui::Dialog)
    , mRequestUrl(requestUrl)
    , mRedirectUrl(redirectUrl)
{
    mUi->setupUi(this);

    while (mRedirectUrl.endsWith('/'))
    {
        mRedirectUrl = mRedirectUrl.remove(mRedirectUrl.length()-1, 1);
    }

    qDebug() << ": RequestUrl:" << mRequestUrl;
    qDebug() << ": RedirectUrl:" << mRedirectUrl;

    QWebEngineProfile * profile = new QWebEngineProfile(mUi->webEngineView);
    RequestInterceptor * interceptor = new RequestInterceptor(mUi->webEngineView);

    QObject::connect(interceptor, SIGNAL(redirectUrlCapture(QUrl)), this, SLOT(processAuthReply(QUrl)));
    profile->setRequestInterceptor(interceptor);

    QWebEnginePage * page = new QWebEnginePage(profile, mUi->webEngineView);
    mUi->webEngineView->setPage(page);
}

Dialog::~Dialog()
{
    delete mUi;
}

void Dialog::showEvent(QShowEvent* /*event*/)
{
    QUrl url(mRequestUrl);
    mUi->webEngineView->load(url);
    mUi->webEngineView->show();
}

void Dialog::processAuthReply(QUrl locationUri)
{
    const QString redirectUri = locationUri.scheme() + "://" + locationUri.host();
    if(redirectUri.compare(mRedirectUrl, Qt::CaseInsensitive) == 0)
    {
//                Logger::info(Tag().toStdString(), "==> pReply->url: %", pReply->url().toString().toStdString());
//                Logger::info(Tag().toStdString(), "==> locationUri: %", location.toStdString());

        mRespondUrl = locationUri.toString();
        this->accept();
    }
}
