#include<iostream>
using namespace std;

//FUNCTION OVERLOADING
//same function name but with different arguments 
//disp() is taking many forms in this program
//Polymorphisim 

void disp();
void disp(int num);
void disp(char ch);
void disp(int num1,int num2);
void disp(int num1,char ch);


int main(void)
{
    disp(); 
    disp(10);
    disp('A');
    disp(30,20);
    disp(60,'A');
    return 0;

}

void disp()
{
    cout<<"\n Inside disp()";
}

void disp(int num)
{
    cout<<"\n Num = "<<num;
}

void disp(char ch)
{
    cout<<"\n Ch = "<<ch;
}

void disp(int num1,int num2)
{
    cout<<"\n Num1 = "<<num1<<" Num2 ="<<num2;

}
void disp(int num1,char ch)
{
    cout<<" \n Num1 ="<<num1<<" Ch = "<<ch<<endl;
}








/*
int sum (int a, int b, int c=0, int d=0)
{
    return a + b + c + d;
}

int main(void)
{
    int val;
    //val=sum(10,20);
    //val=sum(10,20,30);
    val=sum(10,20,30,40);


    cout<<" Value = "<<val<<endl;
    return 0;
}
*/

/*
//if we assign some values to function arguments
//default argument function
void print(int a=10,int b=20,int c=30,int d=40);


int main(void)
{
    //print(10,20,30,40);
    //print(10,20,30);//Error
    //print();
    print(100);
    print(100,200);
    print(100,200,300);
    print(100,200,300,400);
    print();
    return 0;
}


void print(int a,int b,int c,int d)
{
    cout<<"A = "<<a<<" B = "<<b<<"C = "<<c<<"D = "<<d<<endl;
}
*/