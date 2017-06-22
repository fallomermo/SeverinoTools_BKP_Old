/********************************************************************************
** Form generated from reading UI file 'planodecontas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANODECONTAS_H
#define UI_PLANODECONTAS_H

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

class Ui_PlanoDeContas
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_PainelAcao;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_Filtro;
    QGridLayout *gridLayout;
    QLineEdit *campoIDEmpresa;
    QLineEdit *campoIDFilial;
    QLabel *label_5;
    QLabel *campoNomeFilial;
    QLabel *label_7;
    QLabel *campoNomeEmpresa;
    QLabel *label_6;
    QLabel *label;
    QDateEdit *campoInicioPeriodo;
    QDateEdit *campoFinalPeriodo;
    QGroupBox *groupBox_InformacaoCalculos;
    QGridLayout *gridLayout_3;
    QLabel *label_10;
    QLabel *campoCompetenciaBase;
    QLabel *label_12;
    QLabel *campoCalculoFolha;
    QGroupBox *groupBox_ValoresRateio;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLabel *campoTotalRegistros;
    QLabel *label_16;
    QLabel *campoValorTotalAgrupado;
    QGroupBox *groupBox_InfoEvento;
    QGridLayout *gridLayout_5;
    QLabel *label_18;
    QLabel *campoEventoPlanoContas;
    QLabel *label_20;
    QLabel *campoValorEventoAgrupado;
    QLineEdit *campoPesquisarObjetosTabela;

    void setupUi(QWidget *PlanoDeContas)
    {
        if (PlanoDeContas->objectName().isEmpty())
            PlanoDeContas->setObjectName(QStringLiteral("PlanoDeContas"));
        PlanoDeContas->resize(684, 471);
        gridLayout_2 = new QGridLayout(PlanoDeContas);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(PlanoDeContas);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 3);

        groupBox_PainelAcao = new QGroupBox(PlanoDeContas);
        groupBox_PainelAcao->setObjectName(QStringLiteral("groupBox_PainelAcao"));
        horizontalLayout = new QHBoxLayout(groupBox_PainelAcao);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        botaoProcessar = new QPushButton(groupBox_PainelAcao);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        horizontalLayout->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(groupBox_PainelAcao);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        horizontalLayout->addWidget(botaoExportar);

        horizontalSpacer_2 = new QSpacerItem(530, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(groupBox_PainelAcao, 1, 0, 1, 3);

        groupBox_Filtro = new QGroupBox(PlanoDeContas);
        groupBox_Filtro->setObjectName(QStringLiteral("groupBox_Filtro"));
        gridLayout = new QGridLayout(groupBox_Filtro);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        campoIDEmpresa = new QLineEdit(groupBox_Filtro);
        campoIDEmpresa->setObjectName(QStringLiteral("campoIDEmpresa"));
        campoIDEmpresa->setMaximumSize(QSize(140, 16777215));
        campoIDEmpresa->setClearButtonEnabled(true);

        gridLayout->addWidget(campoIDEmpresa, 0, 1, 1, 1);

        campoIDFilial = new QLineEdit(groupBox_Filtro);
        campoIDFilial->setObjectName(QStringLiteral("campoIDFilial"));
        campoIDFilial->setMaximumSize(QSize(140, 16777215));
        campoIDFilial->setClearButtonEnabled(true);

        gridLayout->addWidget(campoIDFilial, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_Filtro);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        campoNomeFilial = new QLabel(groupBox_Filtro);
        campoNomeFilial->setObjectName(QStringLiteral("campoNomeFilial"));

        gridLayout->addWidget(campoNomeFilial, 1, 3, 1, 2);

        label_7 = new QLabel(groupBox_Filtro);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(81, 16777215));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        campoNomeEmpresa = new QLabel(groupBox_Filtro);
        campoNomeEmpresa->setObjectName(QStringLiteral("campoNomeEmpresa"));

        gridLayout->addWidget(campoNomeEmpresa, 0, 3, 1, 2);

        label_6 = new QLabel(groupBox_Filtro);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(81, 16777215));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label = new QLabel(groupBox_Filtro);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        campoInicioPeriodo = new QDateEdit(groupBox_Filtro);
        campoInicioPeriodo->setObjectName(QStringLiteral("campoInicioPeriodo"));
        campoInicioPeriodo->setAlignment(Qt::AlignCenter);
        campoInicioPeriodo->setProperty("showGroupSeparator", QVariant(true));

        gridLayout->addWidget(campoInicioPeriodo, 2, 1, 1, 1);

        campoFinalPeriodo = new QDateEdit(groupBox_Filtro);
        campoFinalPeriodo->setObjectName(QStringLiteral("campoFinalPeriodo"));
        campoFinalPeriodo->setAlignment(Qt::AlignCenter);
        campoFinalPeriodo->setProperty("showGroupSeparator", QVariant(true));

        gridLayout->addWidget(campoFinalPeriodo, 3, 1, 1, 1);

        campoNomeFilial->raise();
        label_6->raise();
        label_5->raise();
        label_7->raise();
        campoIDEmpresa->raise();
        campoIDFilial->raise();
        campoNomeEmpresa->raise();
        label->raise();
        campoInicioPeriodo->raise();
        campoFinalPeriodo->raise();

        gridLayout_2->addWidget(groupBox_Filtro, 0, 0, 1, 3);

        groupBox_InformacaoCalculos = new QGroupBox(PlanoDeContas);
        groupBox_InformacaoCalculos->setObjectName(QStringLiteral("groupBox_InformacaoCalculos"));
        gridLayout_3 = new QGridLayout(groupBox_InformacaoCalculos);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_10 = new QLabel(groupBox_InformacaoCalculos);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);

        campoCompetenciaBase = new QLabel(groupBox_InformacaoCalculos);
        campoCompetenciaBase->setObjectName(QStringLiteral("campoCompetenciaBase"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        campoCompetenciaBase->setFont(font);

        gridLayout_3->addWidget(campoCompetenciaBase, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_InformacaoCalculos);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        campoCalculoFolha = new QLabel(groupBox_InformacaoCalculos);
        campoCalculoFolha->setObjectName(QStringLiteral("campoCalculoFolha"));
        campoCalculoFolha->setFont(font);

        gridLayout_3->addWidget(campoCalculoFolha, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_InformacaoCalculos, 4, 1, 1, 1);

        groupBox_ValoresRateio = new QGroupBox(PlanoDeContas);
        groupBox_ValoresRateio->setObjectName(QStringLiteral("groupBox_ValoresRateio"));
        gridLayout_4 = new QGridLayout(groupBox_ValoresRateio);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_14 = new QLabel(groupBox_ValoresRateio);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        campoTotalRegistros = new QLabel(groupBox_ValoresRateio);
        campoTotalRegistros->setObjectName(QStringLiteral("campoTotalRegistros"));
        campoTotalRegistros->setFont(font);

        gridLayout_4->addWidget(campoTotalRegistros, 0, 1, 1, 1);

        label_16 = new QLabel(groupBox_ValoresRateio);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        campoValorTotalAgrupado = new QLabel(groupBox_ValoresRateio);
        campoValorTotalAgrupado->setObjectName(QStringLiteral("campoValorTotalAgrupado"));
        campoValorTotalAgrupado->setFont(font);

        gridLayout_4->addWidget(campoValorTotalAgrupado, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_ValoresRateio, 4, 0, 1, 1);

        groupBox_InfoEvento = new QGroupBox(PlanoDeContas);
        groupBox_InfoEvento->setObjectName(QStringLiteral("groupBox_InfoEvento"));
        gridLayout_5 = new QGridLayout(groupBox_InfoEvento);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_18 = new QLabel(groupBox_InfoEvento);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_18, 0, 0, 1, 1);

        campoEventoPlanoContas = new QLabel(groupBox_InfoEvento);
        campoEventoPlanoContas->setObjectName(QStringLiteral("campoEventoPlanoContas"));
        campoEventoPlanoContas->setFont(font);

        gridLayout_5->addWidget(campoEventoPlanoContas, 0, 1, 1, 1);

        label_20 = new QLabel(groupBox_InfoEvento);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_20, 1, 0, 1, 1);

        campoValorEventoAgrupado = new QLabel(groupBox_InfoEvento);
        campoValorEventoAgrupado->setObjectName(QStringLiteral("campoValorEventoAgrupado"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        campoValorEventoAgrupado->setFont(font1);

        gridLayout_5->addWidget(campoValorEventoAgrupado, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_InfoEvento, 4, 2, 1, 1);

        campoPesquisarObjetosTabela = new QLineEdit(PlanoDeContas);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));
        campoPesquisarObjetosTabela->setClearButtonEnabled(true);

        gridLayout_2->addWidget(campoPesquisarObjetosTabela, 3, 0, 1, 3);

        QWidget::setTabOrder(campoIDEmpresa, campoIDFilial);
        QWidget::setTabOrder(campoIDFilial, campoInicioPeriodo);
        QWidget::setTabOrder(campoInicioPeriodo, campoFinalPeriodo);
        QWidget::setTabOrder(campoFinalPeriodo, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);
        QWidget::setTabOrder(tableWidget, botaoExportar);

        retranslateUi(PlanoDeContas);

        QMetaObject::connectSlotsByName(PlanoDeContas);
    } // setupUi

    void retranslateUi(QWidget *PlanoDeContas)
    {
        PlanoDeContas->setWindowTitle(QApplication::translate("PlanoDeContas", "Form", Q_NULLPTR));
        groupBox_PainelAcao->setTitle(QString());
        botaoProcessar->setText(QApplication::translate("PlanoDeContas", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("PlanoDeContas", "Exportar...", Q_NULLPTR));
        groupBox_Filtro->setTitle(QString());
        label_5->setText(QApplication::translate("PlanoDeContas", "In\303\255cio Compet\303\252ncia:", Q_NULLPTR));
        campoNomeFilial->setText(QString());
        label_7->setText(QApplication::translate("PlanoDeContas", "Empresa:", Q_NULLPTR));
        campoNomeEmpresa->setText(QString());
        label_6->setText(QApplication::translate("PlanoDeContas", "Filial:", Q_NULLPTR));
        label->setText(QApplication::translate("PlanoDeContas", "Final Compet\303\252ncia", Q_NULLPTR));
        campoInicioPeriodo->setDisplayFormat(QApplication::translate("PlanoDeContas", "MM/yyyy", Q_NULLPTR));
        campoFinalPeriodo->setDisplayFormat(QApplication::translate("PlanoDeContas", "MM/yyyy", Q_NULLPTR));
        groupBox_InformacaoCalculos->setTitle(QApplication::translate("PlanoDeContas", "Informa\303\247\303\265es do C\303\241lculo:", Q_NULLPTR));
        label_10->setText(QApplication::translate("PlanoDeContas", "Compet\303\252ncia:", Q_NULLPTR));
        campoCompetenciaBase->setText(QApplication::translate("PlanoDeContas", "[]", Q_NULLPTR));
        label_12->setText(QApplication::translate("PlanoDeContas", "C\303\241lculo Folha:", Q_NULLPTR));
        campoCalculoFolha->setText(QApplication::translate("PlanoDeContas", "[]", Q_NULLPTR));
        groupBox_ValoresRateio->setTitle(QApplication::translate("PlanoDeContas", "Rateio:", Q_NULLPTR));
        label_14->setText(QApplication::translate("PlanoDeContas", "Total de Registros:", Q_NULLPTR));
        campoTotalRegistros->setText(QApplication::translate("PlanoDeContas", "[]", Q_NULLPTR));
        label_16->setText(QApplication::translate("PlanoDeContas", "Valor Total Agrupado:", Q_NULLPTR));
        campoValorTotalAgrupado->setText(QApplication::translate("PlanoDeContas", "R$", Q_NULLPTR));
        groupBox_InfoEvento->setTitle(QApplication::translate("PlanoDeContas", "Plano de Contas:", Q_NULLPTR));
        label_18->setText(QApplication::translate("PlanoDeContas", "Despesa:", Q_NULLPTR));
        campoEventoPlanoContas->setText(QApplication::translate("PlanoDeContas", "[]", Q_NULLPTR));
        label_20->setText(QApplication::translate("PlanoDeContas", "Valor Agrupado:", Q_NULLPTR));
        campoValorEventoAgrupado->setText(QApplication::translate("PlanoDeContas", "R$", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlanoDeContas: public Ui_PlanoDeContas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANODECONTAS_H
