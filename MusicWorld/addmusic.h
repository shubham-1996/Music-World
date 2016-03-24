#ifndef ADDMUSIC_H
#define ADDMUSIC_H

#include <QDialog>

namespace Ui {
class AddMusic;
}

class AddMusic : public QDialog
{
    Q_OBJECT

public:
    explicit AddMusic(QWidget *parent = 0);
    ~AddMusic();
    Ui::AddMusic *ui;
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:

};

#endif // ADDMUSIC_H
