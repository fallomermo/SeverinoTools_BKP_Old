/********************************************************************************
** Form generated from reading UI file 'relacaocolaborador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELACAOCOLABORADOR_H
#define UI_RELACAOCOLABORADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RelacaoColaborador
{
public:
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QLineEdit *campoPesquisarObjetosTabela;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *campoID_Empresa;
    QLabel *campoDescricaoEmpresa;
    QLabel *label_2;
    QLineEdit *campoID_Filial;
    QLabel *campoDescricaoFilial;
    QLabel *label_3;
    QDateEdit *dataReferencia;

    void setupUi(QWidget *RelacaoColaborador)
    {
        if (RelacaoColaborador->objectName().isEmpty())
            RelacaoColaborador->setObjectName(QStringLiteral("RelacaoColaborador"));
        RelacaoColaborador->resize(591, 391);
        gridLayout_3 = new QGridLayout(RelacaoColaborador);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(RelacaoColaborador);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 3, 0, 1, 1);

        campoPesquisarObjetosTabela = new QLineEdit(RelacaoColaborador);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));

        gridLayout_3->addWidget(campoPesquisarObjetosTabela, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(RelacaoColaborador);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        botaoProcessar = new QPushButton(groupBox_2);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        horizontalLayout->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(groupBox_2);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        horizontalLayout->addWidget(botaoExportar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(RelacaoColaborador);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        campoID_Empresa = new QLineEdit(groupBox);
        campoID_Empresa->setObjectName(QStringLiteral("campoID_Empresa"));
        campoID_Empresa->setMaximumSize(QSize(113, 16777215));

        gridLayout->addWidget(campoID_Empresa, 0, 1, 1, 1);

        campoDescricaoEmpresa = new QLabel(groupBox);
        campoDescricaoEmpresa->setObjectName(QStringLiteral("campoDescricaoEmpresa"));

        gridLayout->addWidget(campoDescricaoEmpresa, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        campoID_Filial = new QLineEdit(groupBox);
        campoID_Filial->setObjectName(QStringLiteral("campoID_Filial"));
        campoID_Filial->setMaximumSize(QSize(113, 16777215));

        gridLayout->addWidget(campoID_Filial, 1, 1, 1, 1);

        campoDescricaoFilial = new QLabel(groupBox);
        campoDescricaoFilial->setObjectName(QStringLiteral("campoDescricaoFilial"));

        gridLayout->addWidget(campoDescricaoFilial, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dataReferencia = new QDateEdit(groupBox);
        dataReferencia->setObjectName(QStringLiteral("dataReferencia"));
        dataReferencia->setCalendarPopup(true);

        gridLayout->addWidget(dataReferencia, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(campoID_Empresa, campoID_Filial);
        QWidget::setTabOrder(campoID_Filial, dataReferencia);
        QWidget::setTabOrder(dataReferencia, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, botaoExportar);
        QWidget::setTabOrder(botaoExportar, tableWidget);

        retranslateUi(RelacaoColaborador);

        QMetaObject::connectSlotsByName(RelacaoColaborador);
    } // setupUi

    void retranslateUi(QWidget *RelacaoColaborador)
    {
        RelacaoColaborador->setWindowTitle(QApplication::translate("RelacaoColaborador", "Form", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        botaoProcessar->setText(QApplication::translate("RelacaoColaborador", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("RelacaoColaborador", "Exportar", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("RelacaoColaborador", "Empresa:", Q_NULLPTR));
        campoDescricaoEmpresa->setText(QString());
        label_2->setText(QApplication::translate("RelacaoColaborador", "Filial:", Q_NULLPTR));
        campoDescricaoFilial->setText(QString());
        label_3->setText(QApplication::translate("RelacaoColaborador", "Refer\303\252ncia:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RelacaoColaborador: public Ui_RelacaoColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELACAOCOLABORADOR_H
