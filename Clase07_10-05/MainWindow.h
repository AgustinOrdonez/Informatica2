//
// Created by dioswilson1 on 5/10/23.
//

#ifndef INFORMATICA2_MAINWINDOW_H
#define INFORMATICA2_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);

        ~MainWindow();

    private slots:

        void on_pushButtonSalir_clicked();

        void on_lineEditIngreso_editingFinished();

        void on_pushButtonCambio_clicked();

        void on_pushButtonBorrar_clicked();

        void on_pushButtonMessageBox_clicked();

        void on_comboBox_currentTextChanged(const QString &arg1);

        void on_testing_clicked();

    private:
        Ui::MainWindow *ui;
};


#endif //INFORMATICA2_MAINWINDOW_H
