#include <iostream>
using namespace std;

int main()
{
	//int *ptr=(int*)malloc(4);
	int *ptr=new int;
	*ptr=5;
	cout<<"\n *ptr="<<*ptr;
	delete ptr;
	ptr=NULL;

	//int *arrPtr=(int*)malloc(20);
	int *arrPtr=new int[5];
	cout<<"\nEnter 5 int";
	for (int i = 0; i < 5; ++i) {
		cin>>arrPtr[i];
	}
	for (int i = 0; i < 5; ++i) {
		cout<<"\n arrPtr["<<i<<"]="<<arrPtr[i];
	}
	delete []arrPtr;
	arrPtr=NULL;
	return 0;
}




