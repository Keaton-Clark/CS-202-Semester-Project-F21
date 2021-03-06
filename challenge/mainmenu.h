#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "metadata.h"
#include<memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_actionAbout_Qt_triggered();

private:
    Ui::MainMenu *ui;
    metaData *newWindow;
};
#endif // MAINMENU_H
