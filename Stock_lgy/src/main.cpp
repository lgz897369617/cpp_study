#include <iostream>
#include "stocker.h"

const int STKS = 4;
int main()
{
    using std::cout;
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
        };//列表初始化

    Stock stock1;//初始化
    //stock1.show();
    Stock stock2 = Stock("stock2",2,2);//初始化，可能会创建临时变量
    stock1 = Stock("stock1",1,1);//赋值，总会创建临时变量，因为stock1已完成初始化

    int a = 0;
    int & c = a;
    int & b = c;

    cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();
    const Stock * top = &stocks[0];//创建指向第一个对象的指针
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);//存储总值最大的对象对应的指针
    cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}
