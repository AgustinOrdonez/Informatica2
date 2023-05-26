#include "MainWindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    secDialog = new SecDialog(this);
    ui->label->setVisible(false);
    ui->label1->setVisible(false);
    ui->checkBoxSec->setChecked(true);
    connect(&timer, SIGNAL(timeout()), this, SLOT(upgrade()));
    connect(secDialog, SIGNAL(valueChanged(int)), this, SLOT(tiempo(int)));
}


MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_pushButtonExit_clicked() {
    this->close();
}

//Aceso modal
void MainWindow::on_pushButtonSettings_clicked() {
    secDialog->setModal(true);
    secDialog->exec();
}

void MainWindow::upgrade() {
    static bool i{};
    if (i) {
        ui->label->setVisible(true);
        ui->label1->setVisible(false);
    }
    else {
        ui->label->setVisible(false);
        ui->label1->setVisible(true);
    }
    i = !i;
    timer.start(this->valor);
}


void MainWindow::on_pushButtonStar_clicked() {
    timer.start(this->valor);
}


void MainWindow::on_pushButtonStop_clicked() {
    timer.stop();
}

void MainWindow::tiempo(int time) {
    int aux;
    if (ui->checkBoxDec->isChecked()) {
        aux = 100;
    }
    else if (ui->checkBoxSec->isChecked()) {
        aux = 1000;
    }
    this->valor = aux * time;
    ui->lcdNumber->display(this->valor);
}


