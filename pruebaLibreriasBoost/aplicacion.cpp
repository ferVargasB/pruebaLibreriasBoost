#include "aplicacion.h"
#include "ui_aplicacion.h"

Aplicacion::Aplicacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Aplicacion)
{
    ui->setupUi(this);
}

Aplicacion::~Aplicacion()
{
    delete ui;
}
