#include<iostream>
using namespace std;
#include<string>

//class as a Exception
class ArithmeticException
{
    private:
        string name; //name is a variable /data memeber 
    public:
        ArithmeticException()
        {
            this->name="";
        }

        ArithmeticException(string name) 
        {
            this->name=name;
        }

        void disp()
        {
            cout<<this->name<<endl;
        }

        void accept(int &num) // reference
        {
            cout<<"\n Enter Number value";
            cin>>num;
        }
};


int main(void)
{
    ArithmeticException e("Division is not possible because num2 is zero");
    int num1,num2;
    int res;
    e.accept(num1);
    e.accept(num2);

    cout<<" Num1 : "<<num1<<" Num2  : "<<num2<<endl;

    try
    {
        if(num2==0)
            throw e; //e is object of ArithmeticException class 
        else
        {
            res=num1/num2;
            cout<<"\n Result ="<<res<<endl;
        }
    }
    catch(ArithmeticException e)
    {
        e.disp();
    }


    return 0;
}

