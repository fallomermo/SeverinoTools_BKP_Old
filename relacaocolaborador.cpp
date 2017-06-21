#include "relacaocolaborador.h"
#include "ui_relacaocolaborador.h"

RelacaoColaborador::RelacaoColaborador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RelacaoColaborador)
{
    ui->setupUi(this);
}

RelacaoColaborador::~RelacaoColaborador()
{
    delete ui;
}
