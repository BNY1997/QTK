#include "basedialog.h"

BaseDialog::BaseDialog(QWidget *parent) : QWidget(parent)
{
    auto ptr = BaseInfo::getinstance();
    this->setWindowTitle(ptr->windowTitle);
    this->setGeometry(ptr->startX,ptr->startY,ptr->dialogWidth,ptr->dialogHeight);
    this->setWindowIcon(QIcon(ptr->titleIcon));

}

BaseDialog::~BaseDialog(){

}
