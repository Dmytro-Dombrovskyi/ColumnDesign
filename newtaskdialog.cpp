#include "newtaskdialog.h"

NewTaskDialog::NewTaskDialog(QDialog *parent) :
    QDialog(parent),
    NewTaskUi(new Ui::NewTaskDialog)
{
    NewTaskUi->setupUi(this);
}

NewTaskDialog::~NewTaskDialog()
{
    delete NewTaskUi;
}
