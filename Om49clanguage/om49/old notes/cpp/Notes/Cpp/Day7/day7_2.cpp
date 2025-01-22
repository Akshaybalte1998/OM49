#include<iostream>
using namespace std;
#include<iomanip>


int main(void)
{
    int n,i;
    cout<<"Enter how many elements you wish to enter in an array";
    cin>>n;
    int *ptrArr=new int[n];
     //*ptrArr=(int *)::operator new[](n*sizeof(int))
    cout<<"\n Enter the elements ";
    for(i=0;i<n;i++)
        cin>>ptrArr[i];
    cout<<"\n Array elements are :";
    for(i=0;i<n;i++)
        cout<<setw(6)<<ptrArr[i];

    delete []ptrArr;
    ptrArr=NULL;   

    

    return 0;
}



/*
int main(void)
{
    int *ptr=new int; //heap section //dynamic memory allocation
    *ptr=123;
    cout<<"Value "<<*ptr<<endl; //dereferencing

    delete ptr; //delete 
    ptr=NULL; //to avoid dangling pointer

    
    return 0;
}
*/