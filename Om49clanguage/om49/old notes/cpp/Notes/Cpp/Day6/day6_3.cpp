#include<iostream>
using namespace std;


void swap_by_val(int n1,int n2);//swap by value
void swap_by_add(int *n1,int *n2);//swap by address
void swap_by_ref(int &n1,int &n2);//swap by reference

int main(void)
{
    int n1=10,n2=5;
    
    //cout<<"Before Swap : N1 :"<<n1<<" N2 "<<n2<<endl;
    //swap_by_val(n1,n2);
    //cout<<"After Swap : N1 :"<<n1<<" N2 "<<n2<<endl;
    
    //cout<<"Before Swap : N1 :"<<n1<<" N2 "<<n2<<endl;
    //swap_by_add(&n1,&n2);
    //cout<<"After Swap : N1 :"<<n1<<" N2 "<<n2<<endl;
    

    cout<<"Before Swap : N1 :"<<n1<<" N2 "<<n2<<endl;
    swap_by_ref(n1,n2);
    cout<<"After Swap : N1 :"<<n1<<" N2 "<<n2<<endl;
    
    
    return 0;
}



void swap_by_val(int n1,int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}

void swap_by_add(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    
}
void swap_by_ref(int &n1,int &n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;

}





/*
int main(void)
{
    int a=100;
    int &r=a;// r is reference variable

   cout<<"A : "<<a<<" R : "<<r<<endl;
    cout<<"&a : "<<&a<<"  &r :"<<&r<<endl;

    a++;
    cout<<"after a++ : A : "<<a<<" R : "<<r<<endl;

    r++;
     cout<<"after r++: A : "<<a<<" R : "<<r<<endl;
    return 0;
}

*/