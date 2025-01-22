#include<iostream>
using namespace std;
#include "emp.h"

 Employee::Employee()
 {
     id=1;
     salary=50000;
 }

Employee::Employee(int id,int salary)
{
    this->id=id;
    this->salary=salary;

}
void Employee::accept()
{
    cout<<"Enter ID : ";
    cin>>this->id;
    cout<<"Enter Salary :";
    cin>>this->salary;
}
void Employee::disp()
{
    cout<<"ID : "<<this->id<<"Salary : "<<this->salary<<endl;
}

