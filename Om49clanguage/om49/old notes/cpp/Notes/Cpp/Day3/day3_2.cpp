#include<iostream>
using namespace std;




/*
// Use of scope resolution
//if we want to define member function of the class outside the class scope

class Complex
{
    private:
        int real;
        int imag;
    public:
        void accept();
        void disp();
};


void Complex::accept()
{
    cout<<"Enter Real Value : ";
        cin>>real;
        cout<<"Enter Imag Value :";
        cin>>imag;
}

void Complex::disp()
{
    cout<<"Real = "<<real;
    cout<<"Imag = "<<imag<<endl;

}


int main(void)
{
    Complex c1;
    c1.accept();
    c1.disp();
    return 0;
}

*/


/*
class Complex
{   
    private: //DATA SECURITY 
    //data members
    int real;
    int imag;

    public:
    //member functions
    void accept()
    {
        cout<<"Enter Real Value : ";
        cin>>real;
        cout<<"Enter Imag Value :";
        cin>>imag;
    }
    void disp()
    {
        cout<<"Real = "<<real;
        cout<<"Imag = "<<imag<<endl;

    }
};//end of class scope


int main(void)
{
    Complex c1;//creating object of class Complex
    //object is also called as instance of the class
    //instantiation 
    c1.accept();//calling accept() on object c1
    c1.disp(); //calling disp() on object c1

   // c1.real=40; //private data members can not be accessed outside the class 
    //c1.imag=50;//Error:is private within this context

    Complex c2;
    c2.accept();
    c2.disp();
    return 0;
}

*/