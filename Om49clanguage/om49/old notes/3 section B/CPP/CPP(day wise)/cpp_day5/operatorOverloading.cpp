#include <iostream>
using namespace std;

class complex
{
private:
	int real;
	int imag;
public:
	complex(int r=0,int i=0)
	{
		//cout<<"\n--------complex(int,int)----------";
		this->real=r;
		this->imag=i;
	}
	complex sum(const complex &rc2)
	{
		complex c3;
		c3.real=this->real+rc2.real;
		c3.imag=this->imag+rc2.imag;
		return c3;
	}
	complex operator+(const complex &c2)
	{
		complex c3;
		c3.real=this->real+c2.real;
		c3.imag=this->imag+c2.imag;
		return c3;
	}
	void printComplex()
	{
		cout<<"\n complex="<<this->real<<"+j"<<this->imag;
	}
	friend complex operator-(const complex &c1,const complex &c2);
};

complex operator-(const complex &c1,const complex &c2)
{
	complex c3;
	c3.real=c1.real-c2.real;
	c3.imag=c1.imag-c2.imag;
	return c3;
}
int main()
{
	complex c1(55,30);
	complex c2(22,6);
	complex c3;
    //c3=c1.sum(c2);
	//c3=c1+c2;	//c3=c1.operator+(c2);
	//c3.printComplex();


	c3=c1-c2;  // c3=operator-(c1,c2);
	c3.printComplex();
	return 0;
}




