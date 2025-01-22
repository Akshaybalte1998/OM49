#include<iostream>
using namespace std;
#include<string>

class Person
{
    private:
        string name;
        int age;
    public:
    Person()
    {
        name="";
        age=0;
    }

    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }

    void print_person()
    {
        cout<<" Name : "<<this->name<<" Age : "<<this->age<<endl;

    }
    ~Person()
    {
        cout<<" \n inside person class destructor "<<endl;
    }

};

class Employee : public Person //inheritance in public mode
{
    private:
        int id;
        int sal;
    public:
    Employee()
    {
        this->id=0;
        this->sal=0;
    }
    Employee(int id,int sal,string name,int age):Person(name,age)
    {
        this->id=id;
        this->sal=sal;
    }

    ~Employee()
    {
        cout<<"\n Inside Destructor of employee class"<<endl;
    }

    void print_emp()
    {
        print_person();
        cout<<"\n ID = "<<this->id<<" Sal = "<<this->sal<<endl;
    }
};

int main(void)
{
    Employee eobj(1,50000,"abc",30);
    eobj.print_emp();
    return 0;
}

