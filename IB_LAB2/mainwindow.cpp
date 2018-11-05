#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"

#include <QFileDialog>
#include <QTextStream>
#include <QDataStream>
#include <QTextBrowser>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Выбор+открытие файла с последующим выводом в текстовое поле
void MainWindow::on_actionOpen_triggered()
{
    QFile file(QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("*.txt")));
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream input(&file);
    while (!input.atEnd())
        ui->Code->setText(input.readLine());

    file.close();
}

//Вывод в выбранный файл из результирующего поля
void MainWindow::on_actionSave_triggered()
{
    QFile file(QFileDialog::getSaveFileName(this, tr("Save"), "/NewFile", tr("*.txt")));
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream fileOutput(&file);
    fileOutput << ui->Result->toPlainText() << endl;
    file.close();
}

//Открытие дочернего окна с информацией о методе шифрования
void MainWindow::on_actionInfo_triggered()
{
    SecondWindow window;
    window.setModal(true);
    window.exec();
}

//Шифровка
void MainWindow::on_Encrypt_clicked()
{
    QString code=ui->Code->toPlainText().toUpper(),
            key=ui->Key->toPlainText().toUpper(),
            encrpt_str;

    //Проверяем соответствие размера и ключа
    if (code.size() != key.size()){
        QMessageBox ::critical(this, "Ошибка", "Длина ключа несоответствует длине кода!");
        return;
    }

    for (int i=0; i<code.size(); i++){
        //Проверка, если алфавит содержит символы[i] из строк ввода
        if (alphabet.contains(code[i]) & alphabet.contains(key[i])){
            //Высчитываем новый индекс буквы
            int new_index = alphabet.indexOf(code[i])+alphabet.indexOf(key[i]);
            //Если полученный индекс больше количества символов алфавита
            if (new_index > alphabet.size()-1)
                //то, переводим в другой конец индекс
                new_index=new_index-alphabet.size()+1;
            //Накидываем в строку символ алфавита по полученному индексу
            encrpt_str+=alphabet[new_index];
        } else{
            //Сообщение об ошибке, в случае недопустимых символов
            QMessageBox::critical(this, "Ошибка", "Допустимы только латинские символы!");
            return;
        }
    }
    //Вывод обработаной строки в поле Result
    ui->Result->setText(encrpt_str.toLower());
}

//Дешифровка (тот же алгоритм, только вместо сдвига вправо, сдвиг влево)
void MainWindow::on_Decrypt_clicked()
{
    QString code=ui->Code->toPlainText().toUpper(),
            key=ui->Key->toPlainText().toUpper(),
            decrpt_str;

    if (code.size() != key.size()){
        QMessageBox ::critical(this, "Ошибка", "Длина ключа несоответствует длине кода!");
        return;
    }

    for (int i=0; i<code.size(); i++){
        if (alphabet.contains(code[i]) & alphabet.contains(key[i])){
            int new_index = alphabet.indexOf(code[i])-alphabet.indexOf(key[i]);
            if (new_index < 0)
                new_index=new_index+alphabet.size()-1;
            decrpt_str+=alphabet[new_index];
        } else{
            QMessageBox::critical(this, "Ошибка", "Допустимы только латинские символы!");
            return;
        }
    }
    ui->Result->setText(decrpt_str.toLower());
}

//Вывод размера строки кода
void MainWindow::on_Code_textChanged()
{
    ui->CodeLength->setText(QString::number(ui->Code->toPlainText().size()));
}

//Вывод размера строки ключа
void MainWindow::on_Key_textChanged()
{
    ui->KeyLength->setText(QString::number(ui->Key->toPlainText().size()));
}
