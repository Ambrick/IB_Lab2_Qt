/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionInfo;
    QWidget *centralWidget;
    QTextEdit *Code;
    QTextEdit *Key;
    QTextBrowser *Result;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Encrypt;
    QPushButton *Decrypt;
    QLabel *KeyLength;
    QLabel *CodeLength;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(460, 209);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QStringLiteral("actionInfo"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Code = new QTextEdit(centralWidget);
        Code->setObjectName(QStringLiteral("Code"));
        Code->setGeometry(QRect(10, 10, 411, 41));
        Code->setContextMenuPolicy(Qt::NoContextMenu);
        Key = new QTextEdit(centralWidget);
        Key->setObjectName(QStringLiteral("Key"));
        Key->setGeometry(QRect(10, 60, 411, 41));
        Result = new QTextBrowser(centralWidget);
        Result->setObjectName(QStringLiteral("Result"));
        Result->setGeometry(QRect(10, 140, 441, 41));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 110, 441, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Encrypt = new QPushButton(layoutWidget);
        Encrypt->setObjectName(QStringLiteral("Encrypt"));

        horizontalLayout->addWidget(Encrypt);

        Decrypt = new QPushButton(layoutWidget);
        Decrypt->setObjectName(QStringLiteral("Decrypt"));

        horizontalLayout->addWidget(Decrypt);

        KeyLength = new QLabel(centralWidget);
        KeyLength->setObjectName(QStringLiteral("KeyLength"));
        KeyLength->setGeometry(QRect(430, 60, 21, 41));
        CodeLength = new QLabel(centralWidget);
        CodeLength->setObjectName(QStringLiteral("CodeLength"));
        CodeLength->setGeometry(QRect(430, 10, 21, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionOpen);
        menuMenu->addAction(actionSave);
        menuMenu->addAction(actionInfo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Encryptor", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", nullptr));
        Code->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Code->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \321\201\320\270\320\274\320\262\320\276\320\273\321\214\320\275\320\276\320\271 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270...", nullptr));
        Key->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Key->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \320\272\320\273\321\216\321\207\320\260...", nullptr));
        Result->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Result->setPlaceholderText(QApplication::translate("MainWindow", "\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214\321\201\321\217 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217...", nullptr));
        Encrypt->setText(QApplication::translate("MainWindow", "Encrypt", nullptr));
        Decrypt->setText(QApplication::translate("MainWindow", "Decrypt", nullptr));
        KeyLength->setText(QApplication::translate("MainWindow", "0", nullptr));
        CodeLength->setText(QApplication::translate("MainWindow", "0", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
