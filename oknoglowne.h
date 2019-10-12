#ifndef OKNOGLOWNE_H
#define OKNOGLOWNE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class OknoGlowne; }
QT_END_NAMESPACE

class OknoGlowne : public QMainWindow
{
    Q_OBJECT

public:
    OknoGlowne(QWidget *parent = nullptr);
    ~OknoGlowne();

private slots:
    void on_pushButton_clicked();



private:
    Ui::OknoGlowne *ui;
};
#endif // OKNOGLOWNE_H
