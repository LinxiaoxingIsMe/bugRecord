#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createnewbugitem.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList headText;
    headText<<"描述"<<"备注"<<"时间"<<"是否完成";
    ui->tableBugRecord->setColumnCount(headText.count());
    ui->tableBugRecord->setHorizontalHeaderLabels(headText);

    connect(ui->actNewBug, &QAction::triggered, this, &MainWindow::createNewBug);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createNewBug()
{
    CreateNewBugItem *dlgCreateNewBug = new CreateNewBugItem(this);
    Qt::WindowFlags flags = dlgCreateNewBug->windowFlags();
    dlgCreateNewBug->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);

    dlgCreateNewBug->exec();

    delete dlgCreateNewBug;
}

