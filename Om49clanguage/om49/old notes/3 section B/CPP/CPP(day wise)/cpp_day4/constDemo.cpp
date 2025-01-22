
#include <iostream>
using namespace std;


class demo
{
	int num;
	const int con;//const data member
	mutable int m;
public:
	demo(int n1,int c1,int m1):con(c1),num(n1)//members initializer List
	{
		//this->num=n1;//ok
		//this->con=c1;error
		this->m=m1;
	}
	void print()const
	{
		//this->con=99;error
		//this->num=7;error
		this->m=66;//ok //mutable data is modified in const function
		cout<<" \n num="<<num;
		cout<<"  const="<<con;
		cout<<"  m="<<m;
	}
};
int main()
{
	demo d1(11,22,33);
	d1.print();



//	const int c=55;
//	//c=c+66; error
//	cout<<"\n const c="<<c;
	return 0;
}


