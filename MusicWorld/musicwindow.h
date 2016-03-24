#ifndef MUSICWINDOW_H
#define MUSICWINDOW_H

#include <QMainWindow>
#include <addmusic.h>
#include <QVBoxLayout>
#include <QtWidgets>
#include <dialog.h>

namespace Ui {
class MusicWindow;
}

class MusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MusicWindow(QWidget *parent = 0);
    ~MusicWindow();


private slots:
    void on_pushButton_clicked();

private:
    Ui::MusicWindow *ui;
    QVBoxLayout *vbox ;
    QGroupBox   *groupBox;
    QPushButton *button[100];
    int i;
    Dialog *dialog1[100];
};

#endif // MUSICWINDOW_H
