//
// Created by dioswilson1 on 5/10/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include <QMessageBox>
#include "MainWindow.h"
#include <QMainWindow>
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->comboBox->addItem("Min a Mayusc");
    ui->comboBox->addItem("Mayusc a Min");
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this,
            SLOT(cambio()));// Cambio esta cosa por el goto stlot, creo
}


MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_pushButtonSalir_clicked() {
    this->close();
}


void MainWindow::on_lineEditIngreso_editingFinished() {

}


void MainWindow::on_pushButtonCambio_clicked() {
    QString valor = ui->lineEditIngreso->text();
    int comboboxOption = ui->comboBox->currentIndex();


    if (comboboxOption == 0) { // Min to mayusc
        ui->lineEditResultado->setText(valor.toUpper());
        ui->pushButtonCambio->setStyleSheet("background-color:red");
    }
    else if (comboboxOption == 1) { // Mayusc to min
        ui->lineEditResultado->setText(valor.toLower());
        ui->pushButtonCambio->setStyleSheet("background-color:blue");
    }

}


void MainWindow::on_pushButtonBorrar_clicked() {
    ui->lineEditIngreso->clear();
    ui->lineEditResultado->clear();
}


void MainWindow::on_pushButtonMessageBox_clicked() {
    QMessageBox msgBoxSalida;
    msgBoxSalida.setIcon(QMessageBox::Warning);
    msgBoxSalida.setText("Te querés ir?");
    msgBoxSalida.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBoxSalida.setDefaultButton(QMessageBox::Yes);
    int ret = msgBoxSalida.exec();
    if (ret == QMessageBox::Yes) {
        this->close();
    }
}

void cambio() {

}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1) {
    ui->pushButtonCambio->setText(arg1);
//    ui->testing;
}


void MainWindow::on_testing_clicked()
{

}

