#ifndef CALCULATESTRUCTURES_H
#define CALCULATESTRUCTURES_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class CalculateStructures;
}

class CalculateStructures : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculateStructures(QWidget *parent = 0);
    ~CalculateStructures();

private slots:
    void on_actionNew_task_triggered();

private:
    Ui::CalculateStructures *ui;

    double  columnLength = 0.00;
    double  force = 0.00;
    double  coefficientOfWorkCond = 0.00;
    QString classOfSteel = "none";
    double  designResistanceOfSteel = 0.00;
    QString designSchemeOfTheColumn = "none";

};

#endif // CALCULATESTRUCTURES_H
