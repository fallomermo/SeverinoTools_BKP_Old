/********************************************************************************
** Form generated from reading UI file 'planosaude.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANOSAUDE_H
#define UI_PLANOSAUDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanoSaude
{
public:
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *periodoInicial;
    QLabel *label_2;
    QDateEdit *periodoFinal;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QLineEdit *campoPesquisarObjetosTabela;

    void setupUi(QWidget *PlanoSaude)
    {
        if (PlanoSaude->objectName().isEmpty())
            PlanoSaude->setObjectName(QStringLiteral("PlanoSaude"));
        PlanoSaude->resize(713, 443);
        gridLayout_3 = new QGridLayout(PlanoSaude);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(PlanoSaude);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 2, 0, 1, 2);

        groupBox = new QGroupBox(PlanoSaude);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        periodoInicial = new QDateEdit(groupBox);
        periodoInicial->setObjectName(QStringLiteral("periodoInicial"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        periodoInicial->setFont(font);
        periodoInicial->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(periodoInicial, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        periodoFinal = new QDateEdit(groupBox);
        periodoFinal->setObjectName(QStringLiteral("periodoFinal"));
        periodoFinal->setFont(font);
        periodoFinal->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(periodoFinal, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(PlanoSaude);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        botaoProcessar = new QPushButton(groupBox_2);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        gridLayout_2->addWidget(botaoProcessar, 1, 0, 1, 1);

        botaoExportar = new QPushButton(groupBox_2);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        gridLayout_2->addWidget(botaoExportar, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        campoPesquisarObjetosTabela = new QLineEdit(PlanoSaude);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));
        campoPesquisarObjetosTabela->setClearButtonEnabled(true);

        gridLayout_3->addWidget(campoPesquisarObjetosTabela, 1, 0, 1, 2);

        QWidget::setTabOrder(periodoInicial, periodoFinal);
        QWidget::setTabOrder(periodoFinal, comboBox);
        QWidget::setTabOrder(comboBox, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(PlanoSaude);

        QMetaObject::connectSlotsByName(PlanoSaude);
    } // setupUi

    void retranslateUi(QWidget *PlanoSaude)
    {
        PlanoSaude->setWindowTitle(QApplication::translate("PlanoSaude", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("PlanoSaude", "Per\303\255odo de:", Q_NULLPTR));
        periodoInicial->setDisplayFormat(QApplication::translate("PlanoSaude", "MM/yyyy", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlanoSaude", "a:", Q_NULLPTR));
        periodoFinal->setDisplayFormat(QApplication::translate("PlanoSaude", "MM/yyyy", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_3->setText(QApplication::translate("PlanoSaude", "Tipo de Processamento:", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("PlanoSaude", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("PlanoSaude", "Exportar...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlanoSaude: public Ui_PlanoSaude {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANOSAUDE_H
