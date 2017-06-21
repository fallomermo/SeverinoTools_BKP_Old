#ifndef RELACAOCOLABORADOR_H
#define RELACAOCOLABORADOR_H

#include <QWidget>

namespace Ui {
class RelacaoColaborador;
}

class RelacaoColaborador : public QWidget
{
    Q_OBJECT

public:
    explicit RelacaoColaborador(QWidget *parent = 0);
    ~RelacaoColaborador();

private:
    Ui::RelacaoColaborador *ui;
};

#endif // RELACAOCOLABORADOR_H
