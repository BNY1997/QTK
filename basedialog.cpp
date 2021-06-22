#include "basedialog.h"

BaseDialog::BaseDialog(QWidget *parent) : QWidget(parent)
{
    auto ptr = BaseInfo::getinstance();
    this->setWindowTitle("QTK");
    this->setGeometry(200,200,500,500);
    this->setWindowIcon(QIcon(ptr->titleIcon));

}

BaseDialog::~BaseDialog(){

}
