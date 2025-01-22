#include <iostream>
using namespace std;


void mySwap(int &ra,int &rb)
{
	int t=ra;
	ra=rb;
	rb=t;
}




int main()
{
	int a=22,b=88;
	cout<<"\n before swap a="<<a<<"  b="<<b;
	mySwap(a,b);
	cout<<"\n after swap a="<<a<<"  b="<<b;








//	int num;
//	num=5;
//	int &ref=num;
//	cout<<"\n num="<<num<<"  address of num="<<&num;
//	cout<<"\n ref="<<ref<<"  address of ref="<<&ref;
	return 0;
}




