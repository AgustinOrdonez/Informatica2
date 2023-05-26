#include "SecDialog.h"
#include "ui_SecDialog.h"

SecDialog::SecDialog(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::SecDialog) {
    ui->setupUi(this);
    connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(change(int)));
}

SecDialog::~SecDialog() {
    delete ui;
}

void SecDialog::on_pushButtonExit_clicked() {

    this->close();
}

void SecDialog::change(int a) {
    ui->lcdNumber->display(a);
    emit valueChanged(a);
}

