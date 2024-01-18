#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void WriteStr(QString str_input);
    void MakeList();

    bool TxtFormatOK();
    void MappingPointer(QChar ch, QStringList** p_strList);
    void AppendLetter(QChar letter);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QStringList m_A;
    QStringList m_B;
    QStringList m_C;
    QStringList m_D;
    QStringList m_E;
    QStringList m_F;
    QStringList m_G;
    QStringList m_H;
    QStringList m_I;
    QStringList m_J;
    QStringList m_K;
    QStringList m_L;
    QStringList m_M;
    QStringList m_N;
    QStringList m_O;
    QStringList m_P;
    QStringList m_Q;
    QStringList m_R;
    QStringList m_S;
    QStringList m_T;
    QStringList m_U;
    QStringList m_V;
    QStringList m_W;
    QStringList m_X;
    QStringList m_Y;
    QStringList m_Z;

    QStringList m_0;
    QStringList m_1;
    QStringList m_2;
    QStringList m_3;
    QStringList m_4;
    QStringList m_5;
    QStringList m_6;
    QStringList m_7;
    QStringList m_8;
    QStringList m_9;

    QStringList m_POINT;
    QStringList m_SPACE;
};

#endif // MAINWINDOW_H
