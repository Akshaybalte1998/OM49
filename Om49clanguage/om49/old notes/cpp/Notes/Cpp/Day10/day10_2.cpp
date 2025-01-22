#include<iostream>
using namespace std;

//function overridding
//same function name with same signature but in different scopes

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
        Base::show();
        cout<<"\n inside derived class show() "<<endl;
    }
};

int main(void)
{
    Derived dobj;
    dobj.show();
    return 0;
}
