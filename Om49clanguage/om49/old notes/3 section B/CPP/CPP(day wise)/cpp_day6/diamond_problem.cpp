#include<iostream>
using namespace std;
class A
{
public:
	int a;
	A(int aa=1)
	{
		this->a=aa;
	}
};

class B: virtual public A
{
public:
	int b;
	B(int aa=1,int bb=2)
	{
		this->a=aa;
		this->b=bb;
	}
};
class C: virtual public A
{
public:
	int c;
	C(int aa=1,int cc=3)
	{
		this->a=aa;
		this->c=cc;
	}
};
class D:public B,C
{
public:
	int d;
	D(int aa=0,int bb=0,int cc=0,int dd=0)
	{
		this->d=dd;
		this->b=bb;
		this->c=cc;
		//this->B::a=aa;
		//this->C::a=aa;
		this->a=aa;
	}
};
int main()
{
	D d1;
	cout<<"size of D="<<sizeof(d1);
}















