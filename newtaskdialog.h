#ifndef NEWTASK
#define NEWTASK

#endif // NEWTASK

#include <QDialog>

namespace Ui {
class NewTaskDialog;
}

class NewTaskDialog : public QDialog
{
public:

    explicit NewTaskDialog(QDialog *parent = 0);
    ~NewTaskDialog();

private:
    Ui::NewTaskDialog *NewTaskUi;

};
