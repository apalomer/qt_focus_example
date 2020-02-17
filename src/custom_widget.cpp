#include "custom_widget.h"
#include "ui_custom_widget.h"

CustomWidget::CustomWidget(QWidget *parent) : QWidget(parent), ui(new Ui::CustomWidget)
{
  ui->setupUi(this);
  ui->pushButton_1->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
  ui->pushButton_2->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
  ui->pushButton_3->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
}

CustomWidget::~CustomWidget()
{
  delete ui;
}
