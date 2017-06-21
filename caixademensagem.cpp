#include "caixademensagem.h"
#include "ui_caixademensagem.h"

CaixaDeMensagem::CaixaDeMensagem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CaixaDeMensagem)
{
    ui->setupUi(this);
}

CaixaDeMensagem::~CaixaDeMensagem()
{
    delete ui;
}

void CaixaDeMensagem::processoConcluido(bool ok)
{
    if(ok)
        this->close();
}
