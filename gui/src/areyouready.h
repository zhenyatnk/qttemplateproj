#ifndef _AREYOUREADY_H
#define _AREYOUREADY_H

#include <QDialog>

namespace Ui {
class AreYouReady;
}

class AreYouReady : public QDialog
{
    Q_OBJECT

public:
    explicit AreYouReady(QWidget *parent = nullptr);
    ~AreYouReady();

private:
    Ui::AreYouReady *ui;
};

#endif // _AREYOUREADY_H
