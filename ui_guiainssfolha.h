/********************************************************************************
** Form generated from reading UI file 'guiainssfolha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIAINSSFOLHA_H
#define UI_GUIAINSSFOLHA_H

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

class Ui_GuiaINSSFolha
{
public:
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QLineEdit *campoPesquisarObjetosTabela;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *campoID_Empresa;
    QLabel *label_3;
    QLineEdit *campoID_Filial;
    QLabel *label_5;
    QLabel *campoDescricaoEmpresa;
    QLabel *campoDescricaoFilial;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDateEdit *periodoInicial;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDateEdit *periodoFinal;

    void setupUi(QWidget *GuiaINSSFolha)
    {
        if (GuiaINSSFolha->objectName().isEmpty())
            GuiaINSSFolha->setObjectName(QStringLiteral("GuiaINSSFolha"));
        GuiaINSSFolha->resize(609, 321);
        gridLayout_3 = new QGridLayout(GuiaINSSFolha);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(GuiaINSSFolha);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 2, 0, 1, 2);

        campoPesquisarObjetosTabela = new QLineEdit(GuiaINSSFolha);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));
        campoPesquisarObjetosTabela->setClearButtonEnabled(true);

        gridLayout_3->addWidget(campoPesquisarObjetosTabela, 3, 0, 1, 2);

        groupBox_2 = new QGroupBox(GuiaINSSFolha);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        campoID_Empresa = new QLineEdit(groupBox_2);
        campoID_Empresa->setObjectName(QStringLiteral("campoID_Empresa"));
        campoID_Empresa->setMaximumSize(QSize(130, 16777215));
        campoID_Empresa->setClearButtonEnabled(true);

        gridLayout->addWidget(campoID_Empresa, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(48, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        campoID_Filial = new QLineEdit(groupBox_2);
        campoID_Filial->setObjectName(QStringLiteral("campoID_Filial"));
        campoID_Filial->setMaximumSize(QSize(130, 16777215));
        campoID_Filial->setClearButtonEnabled(true);

        gridLayout->addWidget(campoID_Filial, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(48, 16777215));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        campoDescricaoEmpresa = new QLabel(groupBox_2);
        campoDescricaoEmpresa->setObjectName(QStringLiteral("campoDescricaoEmpresa"));

        gridLayout->addWidget(campoDescricaoEmpresa, 0, 2, 1, 1);

        campoDescricaoFilial = new QLabel(groupBox_2);
        campoDescricaoFilial->setObjectName(QStringLiteral("campoDescricaoFilial"));

        gridLayout->addWidget(campoDescricaoFilial, 1, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(GuiaINSSFolha);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        botaoProcessar = new QPushButton(groupBox_3);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        horizontalLayout->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(groupBox_3);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        horizontalLayout->addWidget(botaoExportar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 2);

        groupBox = new QGroupBox(GuiaINSSFolha);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        periodoInicial = new QDateEdit(groupBox);
        periodoInicial->setObjectName(QStringLiteral("periodoInicial"));
        periodoInicial->setMinimumSize(QSize(73, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        periodoInicial->setFont(font);
        periodoInicial->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(periodoInicial);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_2);

        periodoFinal = new QDateEdit(groupBox);
        periodoFinal->setObjectName(QStringLiteral("periodoFinal"));
        periodoFinal->setMinimumSize(QSize(73, 0));
        periodoFinal->setFont(font);
        periodoFinal->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(periodoFinal);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(periodoInicial, periodoFinal);
        QWidget::setTabOrder(periodoFinal, campoID_Empresa);
        QWidget::setTabOrder(campoID_Empresa, campoID_Filial);
        QWidget::setTabOrder(campoID_Filial, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);
        QWidget::setTabOrder(tableWidget, botaoExportar);

        retranslateUi(GuiaINSSFolha);

        QMetaObject::connectSlotsByName(GuiaINSSFolha);
    } // setupUi

    void retranslateUi(QWidget *GuiaINSSFolha)
    {
        GuiaINSSFolha->setWindowTitle(QApplication::translate("GuiaINSSFolha", "Form", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("GuiaINSSFolha", "Empresa :", Q_NULLPTR));
        label_5->setText(QApplication::translate("GuiaINSSFolha", "Filial :", Q_NULLPTR));
        campoDescricaoEmpresa->setText(QString());
        campoDescricaoFilial->setText(QString());
        groupBox_3->setTitle(QString());
        botaoProcessar->setText(QApplication::translate("GuiaINSSFolha", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("GuiaINSSFolha", "Exportar", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("GuiaINSSFolha", "Per\303\255odo de :", Q_NULLPTR));
        periodoInicial->setDisplayFormat(QApplication::translate("GuiaINSSFolha", "MM/yyyy", Q_NULLPTR));
        label_2->setText(QApplication::translate("GuiaINSSFolha", "a :", Q_NULLPTR));
        periodoFinal->setDisplayFormat(QApplication::translate("GuiaINSSFolha", "MM/yyyy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GuiaINSSFolha: public Ui_GuiaINSSFolha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIAINSSFOLHA_H
