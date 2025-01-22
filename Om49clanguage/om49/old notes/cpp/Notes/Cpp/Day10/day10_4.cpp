#include<iostream>
using namespace std;

//LATE BINDING CONCEPT

class Base
{
    public:
    virtual void show()
    {
        cout<<"\n inside base class show() "<<endl;
    }
};

class Derived:public Base
{
    public:
    void show()
    {
       Base::show();
       cout<<"\n inside derived class show() "<<endl;
    }
};

int main(void)
{
    Base *ptr;
    Derived d;
    ptr=&d;
    ptr->show();
    return 0;
}