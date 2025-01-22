#include<iostream>
using namespace std;
//static data member
class Test
{
    private:
        int num;
        static int s_var; //static data member
        //BSS (Block Start by Symbol) 
    public:
    Test()
    {
        num=10;
        //this->s_var=20;//ERROR
    }
    Test(int num)
    {
        this->num=num;
    }

    void disp()
    {
        cout<<"Num : "<<num<<" S_VAR :"<<s_var<<endl;
    }

    void change()
    {
        this->num+=10;
        s_var+=500;
        cout<<"After modification :";
        cout<<" Num : "<<num<<" S_VAR :"<<s_var<<endl;
    }
};

int Test::s_var=1000; //initialization (Data Section)


int main(void)
{
    Test t;
    t.disp();
    Test t1(4);
    t1.change();
    t1.disp();

    return 0;
}