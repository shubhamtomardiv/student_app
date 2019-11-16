#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPixmap pix("C:/Users/shubh/Pictures/kedarnath/DSC_0139.jpg");
//    ui->label_pic->setPixmap(pix)
//    ui->statusBar->addPermanentWidget(ui->status_bar)

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_LoginButton_clicked()
{
    QString username = ui->Username_text->text();
    QString password = ui->Password_text->text();

    if (username == "test" && password == "test") {
        QMessageBox::information(this,"Login","Username and password is correct");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();
        //ui->statusBar->showMessage("username and password are correct",5000);
        //ui->status_bar->settext("username and password is correct");
    }
    else {
        QMessageBox::warning(this,"Login","Username or password is incorrect");
        //ui->statusBar->showMessage("username or password is incorrect");
    }

}

void MainWindow::on_textBrowser_anchorClicked(const QUrl &arg1)
{
    hide();
    secDialog = new SecDialog(this);
    secDialog->show();
}
