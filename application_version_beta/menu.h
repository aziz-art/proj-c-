#ifndef MENU_H
#define MENU_H
#include "login.h"
#include "QString"
#include <QDialog>
#include "admin.h"
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    void setClient(admin l);
    ~Menu();

private slots:
    void showTime();
    void on_pushButton_retour_clicked();

    void on_pushButton_logout_clicked();

    void on_toolButton_aide_clicked();

    void on_toolButton_a_clicked();

    void on_pushButton_a_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_Q_clicked();

    void on_pushButton_Sante_clicked();

    void on_pushButton_Animal_clicked();

    void on_pushButton_a_2_clicked();

    void on_pushButton_Securite_clicked();

    void on_pushButton_activite_clicked();

    void on_pushButton_Contact_clicked();

    void on_pushButton_programme_clicked();

    void on_pushButton_cuisine_clicked();

    void on_pushButton_123_clicked();

    void on_Button_cuisine_clicked();

    void on_pushButton_cui_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H