#include "aplicacion.h"
#include "ui_aplicacion.h"
#include "boost/regex.hpp"

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
