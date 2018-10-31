#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QPixmap>

SecondWindow::SecondWindow(QWidget *parent) : QDialog(parent), ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    //Вывод таблицы Виженера в дополнительном окне
    ui->Image->setPixmap(QPixmap (":/Resources/Table.png").scaled(ui->Image->width(),ui->Image->height(),Qt::KeepAspectRatio));
}

SecondWindow::~SecondWindow()
{
    delete ui;
}
