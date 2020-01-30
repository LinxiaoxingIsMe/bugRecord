#include "createnewbugitem.h"
#include "ui_createnewbugitem.h"
#include <QDebug>
//#include <QMessageBox>
CreateNewBugItem::CreateNewBugItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateNewBugItem)
{
    ui->setupUi(this);
    ui->ButtonBack->hide();
}

CreateNewBugItem::~CreateNewBugItem()
{
    delete ui;
}

void CreateNewBugItem::on_ButtonNext_clicked()
{
    int nCount = ui->stackedCreateNewBug->count();
    int nIndex = ui->stackedCreateNewBug->currentIndex();

    if(nIndex == 0 && ui->textDescribe->toPlainText().isEmpty())
    {
//        QString dlgTitle = "错误";
//        QString strInfo = "描述不能为空";
//        QMessageBox::critical(this, dlgTitle, strInfo);
    }
    else
    {
        nIndex++;
        ui->ButtonBack->show();
        ui->stackedCreateNewBug->setCurrentIndex(nIndex);
        ui->ButtonNext->setText("完成");
    }

    if(ui->ButtonNext->text() == "完成" && nIndex >= nCount)
    {
        this->close();
    }

}

void CreateNewBugItem::on_ButtonBack_clicked()
{
    int nIndex = ui->stackedCreateNewBug->currentIndex();
    nIndex--;
    ui->ButtonNext->setText("下一步");
    ui->stackedCreateNewBug->setCurrentIndex(nIndex);
    if(nIndex == 0)
    {
        ui->ButtonBack->hide();
    }

}
