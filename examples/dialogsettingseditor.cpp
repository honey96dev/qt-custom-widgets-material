#include "dialogsettingseditor.h"
#include <QVBoxLayout>
#include <QColorDialog>
#include <qtmaterialdialog.h>

DialogSettingsEditor::DialogSettingsEditor(QWidget *parent)
    : QWidget(parent),
      ui(new Ui::DialogSettingsForm),
      m_dialog(new QtMaterialDialog)
{
    QVBoxLayout *layout = new QVBoxLayout;
    setLayout(layout);

    QWidget *widget = new QWidget;
    layout->addWidget(widget);

    QWidget *canvas = new QWidget;
    canvas->setStyleSheet("QWidget { background: white; }");
    layout->addWidget(canvas);

    ui->setupUi(widget);
    layout->setContentsMargins(20, 20, 20, 20);

    layout = new QVBoxLayout;
    canvas->setLayout(layout);
    canvas->setMaximumHeight(300);

    m_dialog->setParent(this);

    QWidget *dialogWidget = new QWidget;
    QVBoxLayout *dialogWidgetLayout = new QVBoxLayout;
    dialogWidget->setLayout(dialogWidgetLayout);

    okayButton = new QtMaterialFlatButton("Okay");
    dialogWidgetLayout->addWidget(okayButton);
    dialogWidgetLayout->setAlignment(okayButton, Qt::AlignBottom | Qt::AlignLeft);
    okayButton->setRole(Material::Primary);

    QtMaterialFlatButton *closeButton = new QtMaterialFlatButton("Close");
    dialogWidgetLayout->addWidget(closeButton);
    dialogWidgetLayout->setAlignment(closeButton, Qt::AlignBottom | Qt::AlignRight);
    closeButton->setRole(Material::Secondary);

//    closeButton->setMaximumWidth(150);

    QVBoxLayout *dialogLayout = new QVBoxLayout;
    m_dialog->setWindowLayout(dialogLayout);

    dialogWidget->setMinimumHeight(300);

    dialogLayout->addWidget(dialogWidget);

    setupForm();

    connect(ui->showDialogButton, SIGNAL(pressed()), this, SLOT(showDialog()));
    connect(closeButton, SIGNAL(clicked()), m_dialog, SLOT(hideDialog()));
}

DialogSettingsEditor::~DialogSettingsEditor()
{
    delete ui;
}

void DialogSettingsEditor::setupForm()
{
}

void DialogSettingsEditor::updateWidget()
{
}

void DialogSettingsEditor::showDialog() {
    m_dialog->showDialog();
    okayButton->setFocus();
    qDebug("asdfasdfasd");
}
