#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QDialog>

namespace Ui {
class leaderboard;
}

class leaderboard : public QDialog
{
    Q_OBJECT

public:
    explicit leaderboard(QWidget *parent = nullptr);
    ~leaderboard();
    void showLeaderboard();

private:
    Ui::leaderboard *ui;
};

#endif // LEADERBOARD_H