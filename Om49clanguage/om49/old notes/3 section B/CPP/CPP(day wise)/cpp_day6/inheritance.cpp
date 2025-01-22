#include <iostream>
using namespace std;
class person
{
protected:
	string name;
	int age;
public:
	person()
	{
		cout<<"\n------person()----";
		this->name="xxx";
		this->age=10;
	}
	person(string name,int a)
	{
		cout<<"\n------person(string,int )----";
		this->name=name;
		this->age=a;
	}
	void accept()
	{
		cout<<"Enter name, age";
		cin>>this->name>>this->age;
	}
	virtual void print()//virtual function
	{
		cout<<"\n Name="<<name;
		cout<<"  age="<<age;
	}
	void funPerson()
	{
		cout<<"--- time pass function()----";
	}
};

class student:public person
{
	int roll;
	string school;
public:
	student()
	{
		cout<<"\n--------student()----------";
		roll=0;
		school="xxxx";
	}
	student(string name,int a,int r,string sch):person(name,a)
	{
		cout<<"\n--------student(string,int,int,string)----------";
		this->roll=r;
		this->school=sch;
	}
	void updateName(string uname)
	{
		this->name=uname;
	}
	void print()
	{
		person::print();
		cout<<"  roll="<<this->roll;
		cout<<"  school="<<this->school;
	}
	void accept()
	{
		person::accept();
		cout<<"\n enter roll ,school";
		cin>>roll>>school;
	}
};
int main()
{

	person *pptr=new student("ravi",6,27,"mileni");
	pptr->print();

//==========================================================
//	student *sptr=new student("ravi",6,27,"mileni");
//	sptr->print();
//	person *pptr;
//	pptr=sptr;
//	pptr->print();

//==================================================
//	 student s1;
//	 s1.print();
//	 person p1;
//	 p1=s1;
//	 p1.print();

//====================================================================
	//student s2("rajiv",13,77,"mile");
	//s2.print();
	//s2.name="mbgh";//error
	//rajeev
	//-----------------------------------------------
	//student s1;
	//s1.print();
	//s1.accept();
	//s1.print();
	return 0;
}













