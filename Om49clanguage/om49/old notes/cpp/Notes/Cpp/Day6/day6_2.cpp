#include<iostream>
using namespace std;

class Demo
{
    private:
        int num;//non constant data member
        const int c; //constant data member
        mutable int m;
    public:
        Demo():num(30),c(40),m(50){}
       
        void disp() const //constant member function
        {
            cout<<" Num : "<<num<<" C : "<<c<<" M : "<<m<<endl; 
            //num++; //Error
            //c++; //Error
            m++;
            cout<<" Num : "<<num<<" C : "<<c<<" M : "<<m<<endl; 
           
        }
};

int main(void)
{
    Demo dobj;
    dobj.disp();
    return 0;
}


/*
class Demo
{
    private:
        int num;//non constant data member
        const int c; //constant data member
    public:
        Demo():num(30),c(40){}
       
        void disp() const //constant member function
        {
            cout<<" Num : "<<num<<" C : "<<c<<endl; 
            //num++; //error: increment of member ‘Demo::num’ in read-only object
            //c++;//NO Constant data member
            //cout<<"After Num++ "<<num<<endl; 
        }
};

int main(void)
{
    Demo dobj;
    dobj.disp();
    return 0;
}

*/


/*

class Test
{
    private:
        int num1;
        const int val; //constant data member declaration // ALLOWED 
    public:
    Test():num1(10),val(50) {} // constructor member initializer list

    //if we have constant data member inside the class
    //then we must always initialize the const data members
    //using constructor member initializer list


   // Test() // NOT ALLOWED 
    //{
      //  this->num1=10;
       // this->val=50; //error: assignment of read-only member 
    //}
   // Test():val(50) //ALLOWED Partial Constructor Initializer list 
    //{
      //  this->num1=60;
    //}

    void disp()
    {
        cout<<"Num1 : "<<num1;
        cout<<" Val : "<<val;

        this->num1+=10; // Allowed
        //this->val+=20; //Constant value can not be modified
        cout<<"\n After Modification of Num1 "<<num1<<endl;
    }

};

int main(void)
{
    Test t;
    t.disp();
}
*/

/*
int main(void)
{
    const int val; //NOT ALLOWED IN C++ //error: uninitialized const
    val=100;
    cout<<" Val = "<<val<<endl;
    return 0;
}
*/

/*
int main(void)
{
    const int val=50;
    cout<<"Val = "<<val<<endl;
    //val++; //error: increment of read-only variable ‘val’
    return 0;
}

*/