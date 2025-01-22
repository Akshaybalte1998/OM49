#include<iostream>
using namespace std;

class classA
{
    public:
    int a;
};

class classB : public classA
{
    public:
    int b;
};


class classC : public classA
{
    public:
    int c;
};

class classD : public classB, public classC
{
    public:
    int d;
};


int main(void)
{
    classD obj;
    //obj.d=10;
    //cout<<obj.d<<endl;

    //obj.b=30;
    //cout<<obj.b<<endl;


    //obj.c=20;
    //cout<<obj.c<<endl;
    
    //obj.a=50; // error: request for member ‘a’ is ambiguous
    //cout<<obj.a;

    obj.classB::a=100;
    cout<<"Accessing variable of classB :"<<obj.classB::a<<endl;


    obj.classC::a=500;
    cout<<"Accessing variable of classC :"<<obj.classC::a<<endl;
    return 0;
}