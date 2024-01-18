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

void MainWindow::MakeList()
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
    m_C.append("  @@@@");
    m_C.append(" @    ");
    m_C.append(" @    ");
    m_C.append(" @    ");
    m_C.append("  @@@@");
    //
    // make D
    //
    m_D.append(" @@@@  ");
    m_D.append(" @   @ ");
    m_D.append(" @    @");
    m_D.append(" @   @ ");
    m_D.append(" @@@@  ");
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
    m_F.append(" @@@@@");
    m_F.append(" @    ");
    m_F.append(" @@@@ ");
    m_F.append(" @    ");
    m_F.append(" @    ");
    //
    // make G
    //
    m_G.append("  @@@@@ ");
    m_G.append(" @      ");
    m_G.append(" @ @@@@@");
    m_G.append(" @  @ @ ");
    m_G.append("  @@  @ ");
    //
    // make H
    //
    m_H.append(" @   @");
    m_H.append(" @   @");
    m_H.append(" @@@@@");
    m_H.append(" @   @");
    m_H.append(" @   @");
    //
    // make I
    //
    m_I.append(" @@@");
    m_I.append("  @ ");
    m_I.append("  @ ");
    m_I.append("  @ ");
    m_I.append(" @@@");
    //
    // make J
    //
    m_J.append(" @@@@@");
    m_J.append("   @  ");
    m_J.append("   @  ");
    m_J.append("   @  ");
    m_J.append(" @@@  ");
    //
    // make K
    //
    m_K.append(" @  @ ");
    m_K.append(" @ @  ");
    m_K.append(" @@@  ");
    m_K.append(" @  @ ");
    m_K.append(" @   @");
    //
    // make L
    //
    m_L.append(" @   ");
    m_L.append(" @   ");
    m_L.append(" @   ");
    m_L.append(" @   ");
    m_L.append(" @@@@");
    //
    // make M
    //
    m_M.append(" @   @");
    m_M.append(" @@ @@");
    m_M.append(" @ @ @");
    m_M.append(" @ @ @");
    m_M.append(" @ @ @");
    //
    // make N
    //
    m_N.append(" @   @");
    m_N.append(" @@  @");
    m_N.append(" @ @ @");
    m_N.append(" @  @@");
    m_N.append(" @   @");
    //
    // make O
    //
    m_O.append("  @@@@ ");
    m_O.append(" @    @");
    m_O.append(" @    @");
    m_O.append(" @    @");
    m_O.append("  @@@@ ");
    //
    // make P
    //
    m_P.append(" @@@@ ");
    m_P.append(" @   @");
    m_P.append(" @@@@ ");
    m_P.append(" @    ");
    m_P.append(" @    ");
    //
    // make Q
    //
    m_Q.append("  @@@@ ");
    m_Q.append(" @    @");
    m_Q.append(" @  @ @");
    m_Q.append("  @@@@ ");
    m_Q.append("     @@");
    //
    // make R
    //
    m_R.append(" @@@@ ");
    m_R.append(" @   @");
    m_R.append(" @@@@ ");
    m_R.append(" @ @  ");
    m_R.append(" @  @@");
    //
    // make S
    //
    m_S.append("  @@@ ");
    m_S.append(" @    ");
    m_S.append("  @@@ ");
    m_S.append("     @");
    m_S.append(" @@@@ ");
    //
    // make T
    //
    m_T.append(" @@@@@");
    m_T.append("   @  ");
    m_T.append("   @  ");
    m_T.append("   @  ");
    m_T.append("   @  ");
    //
    // make U
    //
    m_U.append(" @   @");
    m_U.append(" @   @");
    m_U.append(" @   @");
    m_U.append(" @   @");
    m_U.append("  @@@ ");
    //
    // make V
    //
    m_V.append(" @   @");
    m_V.append(" @   @");
    m_V.append(" @   @");
    m_V.append("  @ @ ");
    m_V.append("   @  ");
    //
    // make W
    //
    m_W.append(" @     @");
    m_W.append(" @  @  @");
    m_W.append(" @  @  @");
    m_W.append(" @  @  @");
    m_W.append("  @@ @@ ");
    //
    // make X
    //
    m_X.append(" @   @");
    m_X.append("  @ @ ");
    m_X.append("   @  ");
    m_X.append("  @ @ ");
    m_X.append(" @   @");
    //
    // make Y
    //
    m_Y.append(" @   @");
    m_Y.append("  @ @ ");
    m_Y.append("   @  ");
    m_Y.append("   @  ");
    m_Y.append("   @  ");
    //
    // make Z
    //
    m_Z.append(" @@@@@");
    m_Z.append("    @ ");
    m_Z.append("   @  ");
    m_Z.append("  @   ");
    m_Z.append(" @@@@@");
    //
    // make SPACE
    //
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    m_SPACE.append("     ");
}

bool MainWindow::TxtFormatOK()
{
    //
    // open file
    //
    QFile file("./NUM.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "open file error.";
        return false;
    }

    QTextStream stream(&file);
    //
    // 检查文件格式
    //
    int lineCount = 0;
    while (!stream.atEnd())
    {
        stream.readLine();
        lineCount++;
    }
    file.close();

    if (lineCount >= 5)
    {
        return true;
    }
    else
    {
        return false;
    }

    return false;
}

void MainWindow::WriteStr(QString str_input)
{
    //
    // write string
    //
    for (QChar letter: str_input)
    {
        AppendLetter(letter);
    }
}

void MainWindow::AppendLetter(QChar letter)
{
    //
    // 检查文件格式
    //
    if (!TxtFormatOK())
    {
        qDebug() << "请确保NUM.txt文件有至少6行内容";
        return;
    }
    //
    // 映射字母内容
    //
    QStringList* p_strList = NULL;
    if (letter == 'A')
    {
        p_strList = &m_A;
    }
    else if (letter == 'B')
    {
        p_strList = &m_B;
    }
    else if (letter == 'C')
    {
        p_strList = &m_C;
    }
    else if (letter == 'D')
    {
        p_strList = &m_D;
    }
    else if (letter == 'E')
    {
        p_strList = &m_E;
    }
    else if (letter == 'F')
    {
        p_strList = &m_F;
    }
    else if (letter == 'G')
    {
        p_strList = &m_G;
    }
    else if (letter == 'H')
    {
        p_strList = &m_H;
    }
    else if (letter == 'I')
    {
        p_strList = &m_I;
    }
    else if (letter == 'J')
    {
        p_strList = &m_J;
    }
    else if (letter == 'K')
    {
        p_strList = &m_K;
    }
    else if (letter == 'L')
    {
        p_strList = &m_L;
    }
    else if (letter == 'M')
    {
        p_strList = &m_M;
    }
    else if (letter == 'N')
    {
        p_strList = &m_N;
    }
    else if (letter == 'O')
    {
        p_strList = &m_O;
    }
    else if (letter == 'P')
    {
        p_strList = &m_P;
    }
    else if (letter == 'Q')
    {
        p_strList = &m_Q;
    }
    else if (letter == 'R')
    {
        p_strList = &m_R;
    }
    else if (letter == 'S')
    {
        p_strList = &m_S;
    }
    else if (letter == 'T')
    {
        p_strList = &m_T;
    }
    else if (letter == 'U')
    {
        p_strList = &m_U;
    }
    else if (letter == 'V')
    {
        p_strList = &m_V;
    }
    else if (letter == 'W')
    {
        p_strList = &m_W;
    }
    else if (letter == 'X')
    {
        p_strList = &m_X;
    }
    else if (letter == 'Y')
    {
        p_strList = &m_Y;
    }
    else if (letter == 'Z')
    {
        p_strList = &m_Z;
    }
    else if (letter == ' ')
    {
        p_strList = &m_SPACE;
    }
    else
    {
        qDebug() << "请输入大写字母或空格！";
        return;
    }
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
    //
    // 逐行添加string
    //
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
            line.insert(index, p_strList->at(i));
        }
        else
        {
            line.append(p_strList->at(i));
        }
        lines[i] = line;
    }

    file.resize(0);
    //
    // write file
    //
    for (int i = 0; i < lines.size(); i++)
    {
        stream << lines[i] << endl;
    }

    file.close();
}

void MainWindow::on_pushButton_clicked()
{
    QString user_string = ui->lineEdit->text();
    qDebug() << user_string;

    MakeList();
    WriteStr(user_string);
}
