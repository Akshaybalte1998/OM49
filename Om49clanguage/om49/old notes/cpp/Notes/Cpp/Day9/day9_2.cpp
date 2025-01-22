#include<iostream>
using namespace std;

class Test
{
    private:
        int num1;
    public:
        Test()
        {
            this->num1=10;
        }
        Test(int num1)
        {
            this->num1=num1;
        }

        void disp(); //member function of the class
        friend void print(); //declaration of friend function inside the class

};

void Test::disp()
{
    cout<<"Inside Disp() : Num1 = "<<this->num1<<endl;
}

void print()
{
    //since print() is friend function of the class 
    //so it can access private data members directly
    Test tobj;
    tobj.num1=600;
    cout<<"\n inside print() : Num1 = "<<tobj.num1<<endl;

    Test t2;
    cout<<"\n T2 : Num1 : "<<t2.num1<<endl;

    Test t3(40);
    cout<<"\n T3 : Num1 : "<<t3.num1<<endl;

}

int main(void)
{
    Test tobj;
    //tobj.num1=400;// Private data members can not be accessed outside the class 
    tobj.disp();

    print();
    return 0;
}