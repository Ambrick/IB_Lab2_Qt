#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString alphabet="abcdefghijklmnopqrstuvwxyz";

private slots:

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_Encrypt_clicked();

    void on_Decrypt_clicked();

    void on_actionInfo_triggered();

    void on_Code_textChanged();

    void on_Key_textChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
