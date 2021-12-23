#include "groupitem.h"
#include "ui_groupitem.h"

#include <string>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <thread>
#include <QListWidget>
#include <QListWidgetItem>
#include <QColorDialog>
#include <QColor>
#include <QSettings>
#include <QtConcurrent/QtConcurrent>
#include <QFuture>
#include <QFrame>

#include <hueplusplus/Bridge.h>
#include <hueplusplus/BaseDevice.h>
#include <hueplusplus/Light.h>

GroupItem::GroupItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupItem)
{
    ui->setupUi(this);
}

GroupItem::~GroupItem()
{
    delete ui;
}

void GroupItem::setText(const QString &text)
{
    ui->label->setText(text);//set text of label

}

QString GroupItem::getText()
{
    return ui->label->text();//get text from label and return it.
}