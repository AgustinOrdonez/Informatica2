#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
  class SecDialog;
}

class SecDialog : public QDialog {
    Q_OBJECT

    public:
        explicit SecDialog(QWidget *parent = nullptr);

        ~SecDialog();

    signals:

        void valueChanged(int);

    private slots:

        void on_pushButtonExit_clicked();

        void change(int a);

    private:
        Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
