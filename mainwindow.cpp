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
    // make 1
    //
    m_1.append(" @@ ");
    m_1.append("  @ ");
    m_1.append("  @ ");
    m_1.append("  @ ");
    m_1.append(" @@@");
    //
    // make 2
    //
    m_2.append(" @@@@");
    m_2.append("    @");
    m_2.append(" @@@@");
    m_2.append(" @   ");
    m_2.append(" @@@@");
    //
    // make 3
    //
    m_3.append(" @@@@");
    m_3.append("    @");
    m_3.append(" @@@@");
    m_3.append("    @");
    m_3.append(" @@@@");
    //
    // make 4
    //
    m_4.append(" @  @  ");
    m_4.append(" @  @  ");
    m_4.append(" @@@@@@");
    m_4.append("    @  ");
    m_4.append("    @  ");
    //
    // make 5
    //
    m_5.append(" @@@@");
    m_5.append(" @   ");
    m_5.append(" @@@@");
    m_5.append("    @");
    m_5.append(" @@@@");
    //
    // make 6
    //
    m_6.append(" @@@@");
    m_6.append(" @   ");
    m_6.append(" @@@@");
    m_6.append(" @  @");
    m_6.append(" @@@@");
    //
    // make 7
    //
    m_7.append(" @@@@");
    m_7.append("    @");
    m_7.append("    @");
    m_7.append("    @");
    m_7.append("    @");
    //
    // make 8
    //
    m_8.append(" @@@@");
    m_8.append(" @  @");
    m_8.append(" @@@@");
    m_8.append(" @  @");
    m_8.append(" @@@@");
    //
    // make 9
    //
    m_9.append(" @@@@");
    m_9.append(" @  @");
    m_9.append(" @@@@");
    m_9.append("    @");
    m_9.append(" @@@@");
    //
    // make SPACE
    //
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    m_SPACE.append("     ");
    //
    // make POINT
    //
    m_POINT.append("   ");
    m_POINT.append("   ");
    m_POINT.append("   ");
    m_POINT.append(" @@");
    m_POINT.append(" @@");
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

void MainWindow::MappingPointer(QChar ch, QStringList** p_strList)
{
    //
    // 映射字母内容
    //
    switch (ch.toLatin1())
    {
    case 'A':
        *p_strList = &m_A;
        break;
    case 'B':
        *p_strList = &m_B;
        break;
    case 'C':
        *p_strList = &m_C;
        break;
    case 'D':
        *p_strList = &m_D;
        break;
    case 'E':
        *p_strList = &m_E;
        break;
    case 'F':
        *p_strList = &m_F;
        break;
    case 'G':
        *p_strList = &m_G;
        break;
    case 'H':
        *p_strList = &m_H;
        break;
    case 'I':
        *p_strList = &m_I;
        break;
    case 'J':
        *p_strList = &m_J;
        break;
    case 'K':
        *p_strList = &m_K;
        break;
    case 'L':
        *p_strList = &m_L;
        break;
    case 'M':
        *p_strList = &m_M;
        break;
    case 'N':
        *p_strList = &m_N;
        break;
    case 'O':
        *p_strList = &m_O;
        break;
    case 'P':
        *p_strList = &m_P;
        break;
    case 'Q':
        *p_strList = &m_Q;
        break;
    case 'R':
        *p_strList = &m_R;
        break;
    case 'S':
        *p_strList = &m_S;
        break;
    case 'T':
        *p_strList = &m_T;
        break;
    case 'U':
        *p_strList = &m_U;
        break;
    case 'V':
        *p_strList = &m_V;
        break;
    case 'W':
        *p_strList = &m_W;
        break;
    case 'X':
        *p_strList = &m_X;
        break;
    case 'Y':
        *p_strList = &m_Y;
        break;
    case 'Z':
        *p_strList = &m_Z;
        break;
    case '0':
        *p_strList = &m_0;
        break;
    case '1':
        *p_strList = &m_1;
        break;
    case '2':
        *p_strList = &m_2;
        break;
    case '3':
        *p_strList = &m_3;
        break;
    case '4':
        *p_strList = &m_4;
        break;
    case '5':
        *p_strList = &m_5;
        break;
    case '6':
        *p_strList = &m_6;
        break;
    case '7':
        *p_strList = &m_7;
        break;
    case '8':
        *p_strList = &m_8;
        break;
    case '9':
        *p_strList = &m_9;
        break;
    case ' ':
        *p_strList = &m_SPACE;
        break;
    case '.':
        *p_strList = &m_POINT;
        break;
    default:
        qDebug() << "请输入大写字母或空格！";
        return;
        break;
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
    MappingPointer(letter, &p_strList);
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

void MainWindow::on_pushButton_clicked()
{
    QString user_string = ui->lineEdit->text();
    qDebug() << user_string;

    MakeList();
    WriteStr(user_string);
}
