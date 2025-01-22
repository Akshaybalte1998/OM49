#include <iostream>
using namespace std;

class array
{
	int size;
	int *ptr;
public:
	array()
	{
		this->size=0;
		this->ptr=NULL;
	}
	array(int s)
	{
		this->size=s;
		this->ptr=new int[this->size];
		for (int i = 0; i < this->size; ++i) {
			this->ptr[i]=0;
		}
	}
	array(const array &a1)
	{
		this->size=a1.size;
		this->ptr=new int[this->size];
		for (int i = 0; i < this->size; ++i) {
			this->ptr[i]=a1.ptr[i];
		}
	}
	void printArray()
	{
		cout<<"\n Array=";
		for (int i = 0; i < this->size; ++i) {
			cout<<"\nptr["<<i<<"]="<<this->ptr[i];
		}
	}
	void acceptArray()
	{
		cout<<"Enter "<<this->size<<" ints";
		for (int i = 0; i < this->size; ++i) {
			cin>>this->ptr[i];
		}
	}
	~array()
	{
		if(this->ptr!=NULL)
		{
			delete []this->ptr;
			this->ptr=NULL;
		}
	}
};

int main()
{
	array a1(5);
	a1.acceptArray();
	a1.printArray();

	cout<<"\na2=";
	array a2(a1);
	a2.printArray();
	return 0;
}







