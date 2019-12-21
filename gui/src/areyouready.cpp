#include "areyouready.h"
#include "ui_areyouready.h"

AreYouReady::AreYouReady(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AreYouReady)
{
    ui->setupUi(this);
}

AreYouReady::~AreYouReady()
{
    delete ui;
}
