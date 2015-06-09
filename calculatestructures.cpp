#include "calculatestructures.h"
#include "ui_calculatestructures.h"

CalculateStructures::CalculateStructures(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculateStructures)
{
    ui->setupUi(this);
}

CalculateStructures::~CalculateStructures()
{
    delete ui;
}

void CalculateStructures::on_actionNew_task_triggered()
{

}
