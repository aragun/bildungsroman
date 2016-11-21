#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QUrl>

#if defined(RMSAUTH_WEB_AUTH_DIALOG_LIBRARY)
#  define MYSHAREDLIB_EXPORT Q_DECL_EXPORT
#else
#  define MYSHAREDLIB_EXPORT Q_DECL_IMPORT
#endif

namespace Ui {
class Dialog;
}

class MYSHAREDLIB_EXPORT Dialog : public QDialog
{
    Q_OBJECT

public:
    const QString& respondUrl() const {return respondUrl_;}

    explicit Dialog(const QString& requestUrl, const QString& redirectUrl, bool useCookie = false, QWidget *parent = 0);
    ~Dialog();
    QString requestUrl_;
    QString redirectUrl_;
    QString respondUrl_;

private:
    Ui::Dialog *ui;

public slots:
    void processAuthReply(QUrl);

protected:
    void showEvent(QShowEvent * event) override;

};

#endif // DIALOG_H
