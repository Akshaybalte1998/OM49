#include<iostream>
using namespace std;

//template : GENERIC PROGRAMMING
//function template

template<class T> // T : type parameter

void swap_number(T &o1,T &o2)
{
    T temp=o1;
    o1=o2;
    o2=temp;
}

int main(void)
{
    int n1=30,n2=20;
    cout<<"Before swap N1: "<<n1<<" N2 : "<<n2<<endl;
    swap_number<int>(n1,n2);
    cout<<"\n After swap N1: "<<n1<<" N2 : "<<n2<<endl;

    float f1=2.6;
    float f2=4.6;
    cout<<"\n Before swap F1: "<<f1<<" F2 : "<<f2<<endl;
    swap_number<float>(f1,f2);
     cout<<"\n After swap F1: "<<f1<<" F2 : "<<f2<<endl;
    return 0;
}