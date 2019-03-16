#ifndef DIALOGSETTINGSEDITOR_H
#define DIALOGSETTINGSEDITOR_H

#include <QWidget>
#include "ui_dialogsettingsform.h"
#include <qtmaterialflatbutton.h>

class QtMaterialDialog;

class DialogSettingsEditor : public QWidget
{
    Q_OBJECT

public:
    explicit DialogSettingsEditor(QWidget *parent = 0);
    ~DialogSettingsEditor();

protected slots:
    void setupForm();
    void updateWidget();
    void showDialog();

private:
    Ui::DialogSettingsForm *const ui;
    QtMaterialDialog       *const m_dialog;
    QtMaterialFlatButton *okayButton;
};

#endif // DIALOGSETTINGSEDITOR_H
