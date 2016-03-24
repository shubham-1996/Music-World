#include "addmusic.h"
#include "ui_addmusic.h"
#include <QDialog>

AddMusic::AddMusic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMusic)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
}

AddMusic::~AddMusic()
{
    delete ui;
}


