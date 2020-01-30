#ifndef CREATENEWBUGITEM_H
#define CREATENEWBUGITEM_H

#include <QDialog>

namespace Ui {
class CreateNewBugItem;
}

class CreateNewBugItem : public QDialog
{
    Q_OBJECT

public:
    explicit CreateNewBugItem(QWidget *parent = nullptr);
    ~CreateNewBugItem();

private slots:
    void on_ButtonNext_clicked();

    void on_ButtonBack_clicked();

private:
    Ui::CreateNewBugItem *ui;
};

#endif // CREATENEWBUGITEM_H
