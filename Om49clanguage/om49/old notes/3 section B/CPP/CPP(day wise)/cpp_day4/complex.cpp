#include <iostream>
using namespace std;

class complex
{
private:
	int real;
	int imag;
public:
	complex()
	{
		cout<<"\n--------complex()----------";
		this->real=0;
		this->imag=0;
	}
	complex(int r,int i)
	{
		cout<<"\n--------complex(int,int)----------";
		this->real=r;
		this->imag=i;
	}
	complex(const complex &c1)//copy constructor
	{
		cout<<"\n--------complex(complex)----------";
		this->real=c1.real;
		this->imag=c1.imag;
	}
	complex sum(const complex &rc2)
	{
		complex c3;
		c3.real=this->real+rc2.real;
		c3.imag=this->imag+rc2.imag;
		return c3;
	}
	void acceptComplex()
	{
		cout<<"\nEnter real , imag";
		cin>>this->real>>this->imag;
	}
	void printComplex()
	{
		cout<<"\n complex="<<this->real<<"+j"<<this->imag;
	}
	~complex()
	{
		cout<<"\n-----------~complex()---------------";
	}
};
int main()
{
	complex c1(55,30);
	complex c2(c1);//copy constructor
	cout<<"\nc1=";
	c1.printComplex();
	cout<<"\n\n\nc2=";
	c2.printComplex();







//	complex c1(55,30);
//	complex c2(6,7);
//	complex c3;
//
//	c3=c1.sum(c2);
//	c3.printComplex();
//


//	complex *cptr=new complex(2,3);
//	cptr->printComplex();
//	delete cptr;
//	cptr=NULL;

//	complex c1(66,77);//stack
//	c1.printComplex();
//	c1.acceptComplex();
//	c1.printComplex();
	return 0;
}




