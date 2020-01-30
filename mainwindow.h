#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void createNewBugSuccess(QString describe, QString remarks, int priority);
private:
    Ui::MainWindow *ui;

    //单元格item
    enum cellType
    {
        ctDescribe = 1000,
        ctSuggest,
        ctTime,
        ctComplete,
    };
    //行号
    enum colNum
    {
        colDescribe,
        colSuggest,
        colTime,
        colComplete,
    };
private slots:
    void createNewBug();
};
#endif // MAINWINDOW_H
