#include<iostream>
using namespace std;

class Demo
{
    private:
        int num1,num2;
    public:
        Demo();
        Demo(int n1,int n2);
        void accept();
        void disp();
};


Demo::Demo() //constructor //parameterless Constructor / default user defined constructor 
 {        
    cout<<"Inside Parameterless Constructor "<<endl;
    num1=100;
    num2=200;
}

Demo::Demo(int n1,int n2) // paramatrized constructor
 {
      cout<<"\n  inside paramatrized constructor";
      num1=n1;
     num2=n2;
 }

void Demo::accept()
{
     cout<<"Enter Num1 Value ";
    cin>>num1;
      cout<<"Enter Num2 Value ";
        cin>>num2;
}
void Demo::disp()
{
   cout<<"Num1 = "<<num1<<" Num2 = "<<num2<<endl;
}

int main(void)
{
    Demo d2(5,4);
    d2.disp();

    Demo d; // this will call constructor implicitely
   // d.accept();
    d.disp(); //disp() is called on object of the class Demo
    
    //explicit calling

    Demo d1(70,50); //call to paramatrized constructor
    d1.disp();

    return 0;
}



/*

//Constructor

class Demo
{
    private:
        int num1,num2;
    public:

        //If we want to initialize the data members of class at the time of object creation
        //then we use constructor

        // Constructor overloading

        Demo() //constructor //parameterless Constructor / default user defined constructor 
        {        
            cout<<"Inside Parameterless Constructor "<<endl;
            num1=100;
            num2=200;
        }

        Demo(int n1,int n2) // paramatrized constructor
        {
            cout<<"\n  inside paramatrized constructor";
            num1=n1;
            num2=n2;
        }

        void accept()
        {
            cout<<"Enter Num1 Value ";
            cin>>num1;
            cout<<"Enter Num2 Value ";
            cin>>num2;
        }
        void disp()
        {
            cout<<"Num1 = "<<num1<<" Num2 = "<<num2<<endl;
        }
};

int main(void)
{
    Demo d2(5,4);
    d2.disp();

    Demo d; // this will call constructor implicitely
   // d.accept();
    d.disp(); //disp() is called on object of the class Demo
    
    //explicit calling

    Demo d1(70,50); //call to paramatrized constructor
    d1.disp();

    return 0;
}
*/
//default constructor : called by your compiler
//default user defined constructor /parameterless constructor
