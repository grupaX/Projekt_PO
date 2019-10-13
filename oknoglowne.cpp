#include "oknoglowne.h"
#include "ui_oknoglowne.h"
#include <QTextBrowser>



OknoGlowne::OknoGlowne(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OknoGlowne)
{
    ui->setupUi(this);


}

OknoGlowne::~OknoGlowne()
{
    delete ui;
}



void OknoGlowne::on_pushButton_clicked()
{

    int row=0;
    int col=0;

    QFont font = ui->pushButton->font();
    font.setPointSize(12);
    font.setBold(false);

    //Dynamiczne dodanie 10 bloków do gridlayout :)
    for (int i = 1; i < 100; ++i){

        QTextBrowser *block=new QTextBrowser();
        block->setText("Jakiś serwer np./Oddział Wygwizdowo \n jakiś tekst");
        block->setMinimumWidth(150);
        block->setMinimumHeight(140);
        //block->setMaximumWidth(250);
        //block->setMaximumHeight(250);
        block->setFont(font);




        if(col>=4)
        {
             block->setStyleSheet("color: #000000;"
                                  "background-color:#fbc531"

                                  "; selection-color: yellow;"
                                  "selection-background-color: blue;"
                                  "border-style: solid;"
                                  "border-width: 1px;"
                                  "border-radius: 1px;"
                                  "text-align:center;"
                                  "text-transform: none;");
            ++col;
            ui->gridLayout->addWidget(block,row,col);

            ++row;
            col=0;
        }
        else
        {

            block->setStyleSheet("color: #000000;"
                                  "background-color: #7f8fa6;"
                                  "selection-color: yellow;"
                                  "selection-background-color: blue;"
                                  "border-style: solid;"
                                  "border-width: 1px;"
                                  "border-radius: 1px;"
                                  "text-align:center;"
                                  "text-transform: none;");
            ++col;
            ui->gridLayout->addWidget(block,row,col);
            }

            block->show();
        }
}
