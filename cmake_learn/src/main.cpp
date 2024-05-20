#include "head.h"
int main(void)
{
    int* pa = new int(10);
    int* pb = new int(20);
    cout << "调用两个数的和函数结果为："<< add_test(pa, pb) << endl;
    cout << "调用两个数的差函数结果为："<< sub_test(pa, pb) << endl;
    delete pa;
    delete pb;
    show();

    return 0;
}