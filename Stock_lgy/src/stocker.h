#ifndef STOCKER_H
#define STOCKER_H
#include <string>

class Stock
{
//private://数据尽量放在私有部分，实现数据隐藏
        //类对象的默认访问类型为private，结构为public
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }//私有成员函数
                                                      //由于位于类声明中，且比较短小，自动转换为内联函数
public:
    Stock(); //构造函数，无声明类型
    Stock(const std::string & co, long n = 0, double pr = 0.0);//重载，无声明类型
    ~Stock(); //析构函数，无声明类型
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;//若类函数不修改调用对象，应加const
    const Stock & topval(const Stock & s) const;
};

#endif
