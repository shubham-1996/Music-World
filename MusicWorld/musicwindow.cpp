#include "musicwindow.h"
#include "addmusic.h"
#include "ui_addmusic.h"
#include "ui_dialog.h"
#include "ui_musicwindow.h"
#include <QVBoxLayout>

MusicWindow::MusicWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MusicWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("{background-image: url(/1.jpg);}");
    groupBox=new QGroupBox();
    ui->scrollArea->setWidget(groupBox);
    groupBox->setTitle("List of Added Music Sheets");
    vbox = new QVBoxLayout;
}
MusicWindow::~MusicWindow()
{
    delete ui;
}
void MusicWindow::on_pushButton_clicked()
{
    AddMusic *dialog = new AddMusic;
            dialog->setWindowTitle("Add a music sheet");
            dialog->open();
            QString title;
            QString content;
    if(dialog->exec())
    {
         title = dialog->ui->lineEdit->text();
         content = dialog->ui->textEdit->toPlainText();
    }
    if(!title.isEmpty())
    {
         button[i] = new QPushButton(title);

            vbox->addWidget(button[i]);
            vbox->setAlignment(Qt::AlignTop);
            groupBox->setLayout(vbox);
            dialog1[i]=new Dialog;
            dialog1[i]->setWindowTitle(title);
            dialog1[i]->setModal(true);
            connect(button[i],SIGNAL(clicked(bool)),dialog1[i],SLOT(open()));
            dialog1[i]->ui->label->setText(content);
                    i++;
    }

}
