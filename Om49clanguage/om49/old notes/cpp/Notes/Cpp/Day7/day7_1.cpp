#include<iostream>
using namespace std;

//Copy constructor
class Complex
{
    private:
        int real;
        int imag;
    public:
    Complex()
    {
        this->real=10;
        this->imag=5;
    }

    Complex(int real,int imag)
    {
        this->real=real;
        this->imag=imag;
    }

    Complex(Complex &cobj) //copy constructor //&cobj=c2
    {
        this->real=cobj.real; //c3.real = c2.real
        this->imag=cobj.imag; //c3.imag=c2.imag
    }

    ~Complex()
    {
        cout<<"inside destructor"<<endl;
    }
    void disp()
    {
        cout<<"Real :"<<this->real<<" Imag : "<<this->imag<<endl;

    }

    

};
int main(void)
{
    
    Complex c1;
    c1.disp();

    Complex c2(100,200);
    c2.disp();

    Complex c3(c2); //Copy constructor 
    //passed object as a argument to constructor
    //copy constructor is called on c3 object (this is point to C3)
    c3.disp();

    

    
    return 0;
}