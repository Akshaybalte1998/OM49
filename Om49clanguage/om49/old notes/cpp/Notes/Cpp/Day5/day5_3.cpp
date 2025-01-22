#include<iostream>
using namespace std;



class Complex
{

private:
    int real;
    int imag;
public:
    //CONSTRUCTOR
    Complex();
    Complex(int real,int imag);
    
    //DESTRUCTOR
    ~Complex()
    {
        cout<<"\n Destructor Called";
    }

    //GETTER
    int getReal();
    int getImag();

    //SETTER
    void setReal(int real);
    void setImag(int imag);

    //FACILITATOR / USER DEFINED
    void accept();
    void disp();
};

Complex::Complex()
{
    real=10;
    imag=20;
}

Complex::Complex(int real,int imag)
{
    this->real=real;
    this->imag=imag;
}

int Complex::getReal()
{
    return this->real;
}
int Complex::getImag()
{
    return this->imag;
}

void Complex::setReal(int real)
{
    this->real=real;
}
void Complex::setImag(int imag)
{
    this->imag=imag;
}
 void Complex::accept()
 {
     cout<<"Enter Real Value : ";
     cin>>this->real;
     cout<<"\n Enter Imag Value :";
     cin>>this->imag;
 }
void Complex::disp()
{
    cout<<"\n Real = "<<real<<" Imag = "<<imag<<endl;
}

int main(void)
{
    //Complex c1;
    //c1.setImag(400);
    //c1.setReal(1000);
    //c1.disp();

   
   // int r;
    //int i;

    //Complex c2(80,70);
    //r=c2.getReal();
    //cout<<"Real value of c2 object is "<<r<<endl;

    //i=c2.getImag();
    //cout<<"\n Imag value of c2 object is"<<i<<endl;


   // Complex c3;
   // c3.setReal(90);
   // c3.setImag(80);
   // c3.disp();

   Complex c4;
   c4.accept();
   c4.disp();
    return 0;
}