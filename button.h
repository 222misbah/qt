#ifndef BUTTON_H
#define BUTTON_H

#include <QMainWindow>

namespace Ui {
class button;
}

class button : public QMainWindow
{
    Q_OBJECT

public:
    explicit button(QWidget *parent = 0);
    ~button();

private slots:
    void on_on_clicked();

private:
    Ui::button *ui;
};

#endif // BUTTON_H
