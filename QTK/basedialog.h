#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QWidget>
#include <QIcon>
#include "baseinfo.h"

class BaseDialog : public QWidget
{
    Q_OBJECT
public:
    explicit BaseDialog(QWidget *parent = nullptr);
    ~BaseDialog();
    QIcon icon;

};

#endif // BASEDIALOG_H
