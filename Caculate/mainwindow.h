#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"caculate.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    caculate *caculate1;
    QString tempString;

private slots:
    void on_btn_1_clicked();
    void on_btn_2_clicked();
    void on_btn_3_clicked();
    void on_btn_4_clicked();
    void on_btn_5_clicked();
    void on_btn_6_clicked();
    void on_btn_7_clicked();
    void on_btn_8_clicked();
    void on_btn_9_clicked();
    void on_btn_0_clicked();
    void on_btn_point_clicked();
    void on_btn_mul_clicked();
    void on_btn_equ_clicked();
    void on_btn_plu_clicked();
    void on_btn_div_clicked();
    void on_btn_sub_clicked();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
