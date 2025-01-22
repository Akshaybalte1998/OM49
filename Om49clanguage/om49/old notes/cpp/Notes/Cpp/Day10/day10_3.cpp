#include<iostream>
using namespace std;
//EARLY BINDING CONCEPT
class Base
{
    public:
    void show()
    {
        cout<<"\n inside base class show() "<<endl;
    }
};

class Derived:public Base
{
    public:
    void show()
    {
       
       cout<<"\n inside derived class show() "<<endl;
    }
};

int main(void)
{
    Base *ptr; //base class pointer object
    Derived d; //derived class object
    ptr=&d; // please store address of derived class object
    ptr->show();//this will always going to give a call to base  class function
    return 0;
}