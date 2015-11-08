#include "button.h"
#include "ui_button.h"
#include "QDebug"

button::button(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::button)
{
    ui->setupUi(this);
}

button::~button()
{
    delete ui;
}

void button::on_on_clicked()
{
    qDebug() << "on" << "\n";
    ui->status->setText("fcuk");

}

void
