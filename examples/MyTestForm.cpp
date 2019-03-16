#include "MyTestForm.h"
#include "ui_MyTestForm.h"

MyTestForm::MyTestForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyTestForm)
{
    ui->setupUi(this);
    initUi();
}

void MyTestForm::initUi() {
    this->setStyleSheet("* {background: #fff;}");
    ui->btn1->setRole(Material::Primary);
    ui->btn2->setRole(Material::Primary);
    ui->btn3->setRole(Material::Secondary);
//    ui->btn1.
    ui->txt->setLabel("This is a test");
    ui->txt2->setLabel("Auto Complete");

    QStringList states =
      { "Alabama"
      , "Alaska"
      , "American Samoa"
      , "Arizona"
      , "Arkansas"
      , "California"
      , "Colorado"
      , "Connecticut"
      , "Delaware"
      , "District of Columbia"
      , "Florida"
      , "Georgia"
      , "Guam"
      , "Hawaii"
      , "Idaho"
      , "Illinois"
      , "Indiana"
      , "Iowa"
      , "Kansas"
      , "Kentucky"
      , "Louisiana"
      , "Maine"
      , "Maryland"
      , "Massachusetts"
      , "Michigan"
      , "Minnesota"
      , "Mississippi"
      , "Missouri"
      , "Montana"
      , "Nebraska"
      , "Nevada"
      , "New Hampshire"
      , "New Jersey"
      , "New Mexico"
      , "New York"
      , "North Carolina"
      , "North Dakota"
      , "Northern Marianas Islands"
      , "Ohio"
      , "Oklahoma"
      , "Oregon"
      , "Pennsylvania"
      , "Puerto Rico"
      , "Rhode Island"
      , "South Carolina"
      , "South Dakota"
      , "Tennessee"
      , "Texas"
      , "Utah"
      , "Vermont"
      , "Virginia"
      , "Virgin Islands"
      , "Washington"
      , "West Virginia"
      , "Wisconsin"
      , "Wyoming"
    };

    ui->txt2->setDataSource(states);
}

MyTestForm::~MyTestForm()
{
    delete ui;
}
