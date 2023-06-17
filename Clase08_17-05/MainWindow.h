#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "SecDialog.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);

        ~MainWindow();

    private slots:

        void on_pushButtonExit_clicked();

        void on_pushButtonSettings_clicked();

        void upgrade();

        void on_pushButtonStar_clicked();

        void on_pushButtonStop_clicked();

        void tiempo(int time);

    private:
        Ui::MainWindow *ui;
        QTimer timer;
        SecDialog *secDialog;
        int valor{};
};

#endif // MAINWINDOW_H
