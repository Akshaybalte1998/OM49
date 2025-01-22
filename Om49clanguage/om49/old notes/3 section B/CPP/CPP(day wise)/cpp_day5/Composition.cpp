//Composition
//person has a birthdate;
#include <iostream>
using namespace std;

class date
{
	int dd,mm,yy;
public:
	date()
	{
		cout<<"\n------date()----";
		this->dd=1;
		this->mm=1;
		this->yy=2000;
	}
	date(int d,int m,int y)
	{
		cout<<"\n------date(int ,int,int)----";
		this->dd=d;
		this->mm=m;
		this->yy=y;
	}
	void acceptDate()
	{
		cout<<"\nEnter date";
		cin>>dd>>mm>>yy;
	}
	void printDate()
	{
		cout<<" "<<dd<<":"<<mm<<":"<<yy;
	}
};
class person
{
	string name;
	int age;
	date DateofBirth;
public:
	person()
	{
		cout<<"\n------person()----";
		this->name="xxx";
		this->age=10;
	}
	person(string name,int a,int d,int m,int y):DateofBirth(d,m,y)
	{
		cout<<"\n------person(string,int int int int)----";
		this->name=name;
		this->age=a;
	}
	person(string name, int a,date dob)
	{
		this->name=name;
		this->age=a;
		this->DateofBirth=dob;
	}
	void accept()
	{
		cout<<"Enter name, age, DateofBirth";
		cin>>this->name>>this->age;
		DateofBirth.acceptDate();
	}
	void print()
	{
		cout<<"\n Name="<<name;
		cout<<"  age="<<age;
		cout<<" DateofBirth";
		this->DateofBirth.printDate();
	}
};
int main()
{
	person p1("rajiv",12,12,4,2008);
	//p1.accept();
	p1.print();

	date dob(1,5,2006);
	person p2("ravi",15,dob);
	p2.print();


//	date d1;
//	d1.printDate();
//	d1.acceptDate();
//	d1.printDate();
	return 0;
}
