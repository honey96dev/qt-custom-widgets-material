#ifndef MYTESTFORM_H
#define MYTESTFORM_H

#include <QDialog>

namespace Ui {
class MyTestForm;
}

class MyTestForm : public QDialog
{
    Q_OBJECT

public:
    explicit MyTestForm(QWidget *parent = nullptr);
    ~MyTestForm();

protected:
    void initUi();

private:
    Ui::MyTestForm *ui;
};

#endif // MYTESTFORM_H
