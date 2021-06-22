#ifndef BASEINFO_H
#define BASEINFO_H
#include<QString>

//C++实现单例模式的一般方法是将构造函数，拷贝构造函数以及赋值运算符函数声明成private,
//从而禁止他人创建实例。否则如果上面三者不为私有，那么他人就可以调用上面的三个函数来创建实例，
//就没法实现单例模式。但是我们总归是要创建一个类的，
//我们可以提供一个public的静态方法来帮助我们获得这个类唯一的一个实例化对象。

class BaseInfo{
private:
    static const BaseInfo* m_instance;
    BaseInfo(){}
    BaseInfo(const BaseInfo&) = delete;
    BaseInfo& operator = (const BaseInfo&) = delete;

public:

    static const BaseInfo* getinstance(){
        return m_instance;
    }
public:
    QString titleIcon = ":/image/sun.jpeg";
    QString windowTitle = "QTK";
    int startX = 200;
    int startY = 200;
    int dialogWidth = 500;
    int dialogHeight = 500;
    int widgetWidget = 800;
    int widgetHeight = 800;

};



#endif // BASEINFO_H
