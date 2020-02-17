#ifndef CUSTOM_WIDGET_H
#define CUSTOM_WIDGET_H

#include <QWidget>

namespace Ui {
class CustomWidget;
}

class CustomWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CustomWidget(QWidget *parent = nullptr);
    ~CustomWidget();

private:
    Ui::CustomWidget *ui;
};

#endif // CUSTOM_WIDGET_H
