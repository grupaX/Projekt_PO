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

    //Dynamiczne dodanie 10 buttonów do gridlayout :)
    for (int i = 1; i < 100; ++i){




        QPushButton *button = new QPushButton();
        //button->setText(QString::number(i));
        button->setText("Jakiś serwer np./Oddział Wygwizdowo");
        button->setMinimumWidth(150);
        button->setMinimumHeight(140);
       // button->setMaximumWidth(150);
        //button->setMaximumHeight(140);
        button->setFont(font);


        QTextBrowser *block=new QTextBrowser();
        block->setText("Jakiś serwer np./Oddział Wygwizdowo \n jakiś tekst");
        block->setMinimumWidth(150);
        block->setMinimumHeight(140);
        //block->setMaximumWidth(250);
        //block->setMaximumHeight(250);
        block->setFont(font);




        if(col>=4)
        {
            button->setStyleSheet("color: #fff;"
                                  "background-color: #3498db;"

                                  "selection-color: yellow;"
                                  "selection-background-color: blue;");

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
           // ui->gridLayout_3->addWidget(button,row,col);
           // ui->gridLayout_3->addWidget(block,row,col);
            ui->gridLayout->addWidget(block,row,col);

            //ui->scrollArea->addScrollBarWidget(block,Qt::AlignLeft);
            //ui->scrollArea->setWidget(block);
            ++row;
            col=0;
        }
        else
        {
            button->setStyleSheet("color: #fff;"
                                  "background-color: #9b59b6;"
                                  "selection-color: yellow;"
                                  "selection-background-color: blue;");

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
            //ui->scrollArea->addScrollBarWidget(block,Qt::AlignLeft);
            //ui->scrollArea->setWidget(block);
            ui->gridLayout->addWidget(block,row,col);
            //ui->gridLayout_3->addWidget(button,row,col);
           // ui->gridLayout_3->addWidget(block,row,col);
        }

           // button->show();
            block->show();
        }
}
