#ifndef CAIXADEMENSAGEM_H
#define CAIXADEMENSAGEM_H

#include <QWidget>

namespace Ui {
class CaixaDeMensagem;
}

class CaixaDeMensagem : public QWidget
{
    Q_OBJECT

public:
    explicit CaixaDeMensagem(QWidget *parent = 0);
    ~CaixaDeMensagem();

signals:
    void processoOK(bool);

private slots:
    void processoConcluido(bool);

private:
    Ui::CaixaDeMensagem *ui;
};

#endif // CAIXADEMENSAGEM_H
