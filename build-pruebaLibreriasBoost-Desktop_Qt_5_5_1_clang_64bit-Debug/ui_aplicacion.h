/********************************************************************************
** Form generated from reading UI file 'aplicacion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APLICACION_H
#define UI_APLICACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Aplicacion
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Aplicacion)
    {
        if (Aplicacion->objectName().isEmpty())
            Aplicacion->setObjectName(QStringLiteral("Aplicacion"));
        Aplicacion->resize(400, 300);
        menuBar = new QMenuBar(Aplicacion);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Aplicacion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Aplicacion);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Aplicacion->addToolBar(mainToolBar);
        centralWidget = new QWidget(Aplicacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Aplicacion->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Aplicacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Aplicacion->setStatusBar(statusBar);

        retranslateUi(Aplicacion);

        QMetaObject::connectSlotsByName(Aplicacion);
    } // setupUi

    void retranslateUi(QMainWindow *Aplicacion)
    {
        Aplicacion->setWindowTitle(QApplication::translate("Aplicacion", "Aplicacion", 0));
    } // retranslateUi

};

namespace Ui {
    class Aplicacion: public Ui_Aplicacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APLICACION_H
