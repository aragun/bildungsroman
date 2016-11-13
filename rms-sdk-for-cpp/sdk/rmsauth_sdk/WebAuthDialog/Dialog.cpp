#include "dialog.h"
#include "ui_dialog.h"
#include "requestinterceptor.h"
#include <QWebEngineProfile>

Dialog::Dialog(const QString& requestUrl, const QString& redirectUrl, bool useCookie, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
    , requestUrl_(requestUrl)
    , redirectUrl_(redirectUrl)
{
    ui->setupUi(this);

    while (redirectUrl_.endsWith('/'))
    {
        redirectUrl_ = redirectUrl_.remove(redirectUrl_.length()-1, 1);
    }

    qDebug() << ": requestUrl_:" << requestUrl_;
    qDebug() << ": redirectUrl_:" << redirectUrl_;

    QWebEngineProfile * profile = new QWebEngineProfile(ui->webEngineView);
    RequestInterceptor * interceptor = new RequestInterceptor(ui->webEngineView);

    QObject::connect(interceptor, SIGNAL(redirectUrlCapture(QUrl)), this, SLOT(processAuthReply(QUrl)));
    profile->setRequestInterceptor(interceptor);

    QWebEnginePage * page = new QWebEnginePage(profile, ui->webEngineView);
    ui->webEngineView->setPage(page);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::showEvent(QShowEvent* /*event*/)
{
    //StringStream ss; ss << "==> requestUrl_: " << requestUrl_.toStdString();
//    Logger::info(Tag().toStdString(), ss.str());
    QUrl url(requestUrl_);

    /*QNetworkRequest request;
    request.setUrl(url);
    request.setRawHeader("User-Agent", "MSOpenTechWebAuthenticationDialog");
    request.setSslConfiguration(QSslConfiguration::defaultConfiguration());
*/
    ui->webEngineView->load(url);
    ui->webEngineView->show();
}

void Dialog::processAuthReply(QUrl locationUri)
{
    const QString redirectUri = locationUri.scheme() + "://" + locationUri.host();
    if(redirectUri.compare(redirectUrl_, Qt::CaseInsensitive) == 0)
    {
//                Logger::info(Tag().toStdString(), "==> pReply->url: %", pReply->url().toString().toStdString());
//                Logger::info(Tag().toStdString(), "==> locationUri: %", location.toStdString());

        respondUrl_ = locationUri.toString();
        this->accept();
    }
}
