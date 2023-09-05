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

private slots:
    void on_horizontalSlider_actionTriggered(int action);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_textEdit_copyAvailable(bool b);

    void on_frame_customContextMenuRequested(const QPoint &pos);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

    void on_lineEdit_10_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_11_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_5_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_6_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_7_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_8_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_9_cursorPositionChanged(int arg1, int arg2);

    void on_verticalSlider_actionTriggered(int action);

    void on_verticalSlider_2_actionTriggered(int action);

    void on_verticalSlider_3_actionTriggered(int action);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
