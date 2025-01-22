#include<iostream>
using namespace std;

//CONSTRUCTOR MEMBER INITIALIZER LIST
class Test
{
    private:
    int num1,num2,num3;
    public:

    Test():num1(10),num2(20),num3(30) {}

    //Test() //parameterless constructor
    //{
      //  num1=10;
        //num2=20;
        //num3=30;
    //}

    Test(int num1,int num2,int num3)
    {
        this->num1=num1;
        this->num2=num2;
        this->num3=num3;
    }
    void disp()
    {
        cout<<" Num 1 "<<num1<<" Num2 "<<num2<<" Num3 "<<num3<<endl;
    }

};
int main(void)
{
    Test t;
    t.disp();
    Test t2(100,200,300);
    t2.disp();
    return 0;
}


/*
class Demo
{

};
int main(void)
{
    Demo d;//default constructor
    //size of empty class is always one byte
    cout<<"Size = "<<sizeof(Demo);
    //cout<<"Size = "<<sizeof(d);
    return 0;
}
*/

/*
//this keyword
class Demo
{
    private:
    int num1,num2;
    public:
    Demo()
    {
        num1=10;
        num2=20;
    }
  //  Demo(int n1,int n2)
    //{
      //  num1=n1;
       // num2=n2;
    //}

    Demo(int num1,int num2) //Demo(50,30)
    {
        this->num1=num1;
        this->num2=num2;
    }

    void disp()
    {
        cout<<"Num1 = "<<num1<<" Num2 = "<<num2<<endl;
    }

};
int main(void)
{
    Demo dobj;
    dobj.disp(); // disp() this is a keyword which points to itself
    Demo dobj2(50,30);
    dobj2.disp();
    //size of object is equal to 
    //total size of data members available inside the class
    printf("\n Size= %d",sizeof(dobj));
    return 0;
}
*/