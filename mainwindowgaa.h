#ifndef MAINWINDOWGAA_H
#define MAINWINDOWGAA_H

#include <QMainWindow>

namespace Ui {
class MainWindowgaa;
}

class MainWindowgaa : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowgaa(QWidget *parent = nullptr);
    ~MainWindowgaa();

private:
    Ui::MainWindowgaa *ui;
};

#endif // MAINWINDOWGAA_H
