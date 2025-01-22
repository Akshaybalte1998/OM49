#include<iostream>
using namespace std;

//Destructor
class Demo
{
    private:
    int num1;
    int num2;
    public:
    //Demo():num1(10),num2(20){} //parameterless
    Demo()
    {
        cout<<"\n Inside Parameterless Constructor "<<this<<endl;
        num1=10;
        num2=20;
    }
    Demo(int num1,int num2)
    {
        cout<<"\n Inside Parameterized Constructor "<<this<<endl;
        this->num1=num1;
        this->num2=num2;
    }
    void disp()
    {
        cout<<" Num 1 ="<<num1<<" Num2 = "<<num2<<endl;
    }

    ~Demo() //Destructor
    {
        cout<<"\n Destructor called" <<this<<endl;
    }

};

int main(void)
{
    Demo d;
    d.disp();
    Demo d1(400,300);
    d1.disp();
    return 0;
}