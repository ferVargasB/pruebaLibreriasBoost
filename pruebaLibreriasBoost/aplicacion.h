#ifndef APLICACION_H
#define APLICACION_H

#include <QMainWindow>

namespace Ui {
class Aplicacion;
}

class Aplicacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Aplicacion(QWidget *parent = 0);
    ~Aplicacion();

private:
    Ui::Aplicacion *ui;
};

#endif // APLICACION_H
