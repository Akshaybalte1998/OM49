#include<iostream>
using namespace std;



inline int max(int n1,int n2)
{
    int result=(n1>n2)?n1:n2;
    return result;
}

int main(void)
{
    int num1,num2;
    int res;
    cout<<"Enter First Number ";
    cin>>num1;
    cout<<"\n Enter second number :";
    cin>>num2;
    res=max(num1,num2);
    cout<<"\n Maximum = "<<res<<endl;
    
    return 0;
}


/*

void sum(int n1,int n2); //function declaration (global)

int main(void)
{
    int num1,num2;
    cout<<"Enter First Number ";
    cin>>num1;
    cout<<"\n Enter second number :";
    cin>>num2;
    // Scope resolution operator
    ::sum(num1,num2); //call to global function

    cout<<"day4";
    return 0;
}


void sum(int n1,int n2) //function definition
{
    int result;
    result=n1+n2;
    cout<<"\n Addtion = "<<result<<endl;
}


*/