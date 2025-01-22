#include<iostream>
using namespace std;


//IF A CLASS CONSIST OF PURE VIRTUAL FUNCTION THEN
//ABSTRACT CLASS
class Student
{
    public:
    //PURE VIRTUAL FUNCTION
    virtual void details()=0;
};
class info:public Student
{

    public:
    void details()
    {
        cout<<"Inside info class"<<endl;
    }
};
int main(void)
{
    Student *ptr;
    info i;
    ptr=&i;
    
    //Object slicing
    ptr->details();
    return 0;
}

//RTTI
//POLYMORPHIC TYPES