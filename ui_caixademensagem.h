/********************************************************************************
** Form generated from reading UI file 'caixademensagem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIXADEMENSAGEM_H
#define UI_CAIXADEMENSAGEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CaixaDeMensagem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QWidget *CaixaDeMensagem)
    {
        if (CaixaDeMensagem->objectName().isEmpty())
            CaixaDeMensagem->setObjectName(QStringLiteral("CaixaDeMensagem"));
        CaixaDeMensagem->resize(343, 107);
        verticalLayout = new QVBoxLayout(CaixaDeMensagem);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(CaixaDeMensagem);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(CaixaDeMensagem);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(progressBar);


        retranslateUi(CaixaDeMensagem);

        QMetaObject::connectSlotsByName(CaixaDeMensagem);
    } // setupUi

    void retranslateUi(QWidget *CaixaDeMensagem)
    {
        CaixaDeMensagem->setWindowTitle(QApplication::translate("CaixaDeMensagem", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CaixaDeMensagem", "Processando...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CaixaDeMensagem: public Ui_CaixaDeMensagem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIXADEMENSAGEM_H
