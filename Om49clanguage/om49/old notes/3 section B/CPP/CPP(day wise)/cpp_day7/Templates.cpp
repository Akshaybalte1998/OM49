
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
		cout<<"\n--------complex(int,int)----------";
		this->real=r;
		this->imag=i;
	}
	void printComplex()
	{
		cout<<"complex="<<this->real<<"+j"<<this->imag;
	}
};
template<class T>
void mySwap(T &a,T &b)
{
	T t=a;
	a=b;
	b=t;
}

int main()
{

	complex c1(22,77);
	complex c2(99,88);
	cout<<"\n before c1=";
	c1.printComplex();

	cout<<"\n before c2=";
	c2.printComplex();

	mySwap(c1,c2);

	cout<<"\n after c1=";
	c1.printComplex();

	cout<<"\n after c2=";
	c2.printComplex();
//	char a='Z',b='B';
//	cout<<"\n before a="<<a<<"   b="<<b;
//	mySwap(a,b);
//	cout<<"\n after a="<<a<<"   b="<<b;
//
//
//	int a1=22,b1=77;
//	cout<<"\n before a1="<<a1<<"   b1="<<b1;
//	mySwap(a1,b1);
//	cout<<"\n after a1="<<a1<<"   b1="<<b1;
}


