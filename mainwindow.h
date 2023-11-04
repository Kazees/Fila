#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fila.h>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonGerar_clicked();

    void on_pushButtonInserir_clicked();

    void on_pushButtonRetirar_clicked();

    void on_pushButtonAcessar_clicked();

    void on_pushButtonMostrar_clicked();

private:
    Ui::MainWindow *ui;
    bry::Fila *n1;
};
#endif // MAINWINDOW_H
