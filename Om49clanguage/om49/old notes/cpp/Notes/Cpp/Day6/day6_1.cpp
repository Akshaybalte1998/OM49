#include<iostream>
using namespace std;
#include"emp.h"

int main(void)
{
    Employee e;
    e.disp();

    Employee e1(2,60000);
    e1.disp();

    Employee e3;
    e3.accept();
    e3.disp();

    return 0;
}