#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makeList()
{
    //
    // make A
    //
    m_A.append("   @  ");
    m_A.append("  @ @ ");
    m_A.append(" @@@@@");
    m_A.append(" @   @");
    m_A.append(" @   @");
    //
    // make B
    //
    m_B.append(" @@@  ");
    m_B.append(" @  @ ");
    m_B.append(" @@@@ ");
    m_B.append(" @   @");
    m_B.append(" @@@@@");
    //
    // make C
    //
    m_C.append("  @  ");
    m_C.append(" @ @ ");
    m_C.append("@@@@@");
    m_C.append("@   @");
    m_C.append("@   @");
    //
    // make D
    //
    m_D.append("  @  ");
    m_D.append(" @ @ ");
    m_D.append("@@@@@");
    m_D.append("@   @");
    m_D.append("@   @");
    //
    // make E
    //
    m_E.append(" @@@@@");
    m_E.append(" @    ");
    m_E.append(" @@@@ ");
    m_E.append(" @    ");
    m_E.append(" @@@@@");
    //
    // make F
    //
    m_F.append("  @  ");
    m_F.append(" @ @ ");
    m_F.append("@@@@@");
    m_F.append("@   @");
    m_F.append("@   @");
    //
    // make G
    //
    m_G.append("  @  ");
    m_G.append(" @ @ ");
    m_G.append("@@@@@");
    m_G.append("@   @");
    m_G.append("@   @");
    //
    // make H
    //
    m_H.append("  @  ");
    m_H.append(" @ @ ");
    m_H.append("@@@@@");
    m_H.append("@   @");
    m_H.append("@   @");
    //
    // make I
    //
    m_I.append("  @  ");
    m_I.append(" @ @ ");
    m_I.append("@@@@@");
    m_I.append("@   @");
    m_I.append("@   @");
    //
    // make J
    //
    m_J.append("  @  ");
    m_J.append(" @ @ ");
    m_J.append("@@@@@");
    m_J.append("@   @");
    m_J.append("@   @");
    //
    // make K
    //
    m_K.append("  @  ");
    m_K.append(" @ @ ");
    m_K.append("@@@@@");
    m_K.append("@   @");
    m_K.append("@   @");
    //
    // make L
    //
    m_L.append("  @  ");
    m_L.append(" @ @ ");
    m_L.append("@@@@@");
    m_L.append("@   @");
    m_L.append("@   @");
    //
    // make M
    //
    m_M.append("  @  ");
    m_M.append(" @ @ ");
    m_M.append("@@@@@");
    m_M.append("@   @");
    m_M.append("@   @");
//    //
//    // make N
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make O
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make P
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make Q
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make R
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make S
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make T
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make U
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make V
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make W
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make X
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make Y
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
//    //
//    // make Z
//    //
//    m_A.append("  @  ");
//    m_A.append(" @ @ ");
//    m_A.append("@@@@@");
//    m_A.append("@   @");
//    m_A.append("@   @");
}

void MainWindow::WriteStr(QString str_input)
{
    //
    // open file
    //
    QFile file("./NUM.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "open file error.";
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll();
    //
    // write num
    //

}

void MainWindow::writeE()
{
    //
    // open file
    //
    QFile file("./NUM.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "open file error.";
        return;
    }

    QTextStream stream(&file);
    stream << "@@@@@@\n";
    stream << "@     \n";
    stream << "@@@@  \n";
    stream << "@     \n";
    stream << "@@@@@@\n";

    file.close();
    qDebug() << "write E sucess!";
}

void MainWindow::overWriteA()
{

}

void MainWindow::overWriteE()
{
    //
    // open file
    //
    QFile file("./NUM.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "open file error.";
        return;
    }

    QTextStream stream(&file);

    QStringList lines;
    while(!stream.atEnd())
    {
        lines.append(stream.readLine());
    }

    for (int i = 0; i < 5; i++)
    {
        QString line = lines[i];
        int index = line.lastIndexOf("\n");
        if (index >= 0)
        {
            line.insert(index, m_E[i]);
        }
        else
        {
            line.append(m_E[i]);
        }
        lines[i] = line;
    }

    file.resize(0);

    for (int i = 0; i < lines.size(); i++)
    {
        stream << lines[i] << endl;
    }

    file.close();
}

void MainWindow::on_pushButton_clicked()
{
    QString num_str = ui->lineEdit->text();
    qDebug() << num_str;

    makeList();
    WriteStr(num_str);
    overWriteE();

}
