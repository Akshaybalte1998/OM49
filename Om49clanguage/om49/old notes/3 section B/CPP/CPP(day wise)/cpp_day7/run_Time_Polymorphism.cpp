#include <iostream>
using namespace std;

class shape
{
protected:
	int area;
	int peri;
public:
	shape()
	{
		this->area=0;
		this->peri=0;
	}
	void printData()
	{
		cout<<"\n area="<<this->area;
		cout<<"\n peri="<<this->peri;
	}
	virtual void calculateArea()=0;//pure virtual
	virtual void calculatePeri()=0;
	virtual void accept()=0;
};
class rect:public shape
{
private:
	int length;
	int breadth;
public:
	rect(int l=0,int b=0)
	{
		this->length=l;
		this->breadth=b;
	}
	void calculateArea()
	{
		this->area=this->length*this->breadth;
	}
	void calculatePeri()
	{
		this->peri=2*(this->length+this->breadth);
	}
	void accept()
	{
		cout<<"\n enter length,breadth";
		cin>>length>>breadth;
	}
};

class circle:public shape
{
	int radius;
public:
	circle(int r=0)
	{
		this->radius=r;
	}
	void calculateArea()
	{
		this->area=3.14*this->radius*this->radius;
	}
	void calculatePeri()
	{
		this->peri=2*3.14*this->radius;
	}
	void accept()
	{
		cout<<"\n enter radius";
		cin>>this->radius;
	}
};

int menu()
{
	int ch;
	cout<<"\nEnter 1:rect  2:circle 0:exit";
	cin>>ch;
	return ch;
}

int main()
{
	//shape *sptr1=new shape();
	shape *sptr=NULL;
	int ch;
	while((ch=menu())!=0)
	{
		switch (ch) {
			case 1://rect
				sptr=new rect();
				break;
			case 2://circle
				sptr=new circle();
				break;
		}
		if(sptr!=NULL)
		{
			sptr->accept();
			sptr->calculateArea();
			sptr->calculatePeri();
			sptr->printData();
		}
	}







//=================================================
//	shape *sptr=NULL;
//	sptr=new rect (5,5);
//	sptr->accept();
//	sptr->calculateArea();
//	sptr->calculatePeri();
//	sptr->printData();
//
//	sptr=new circle(5);
//	sptr->accept();
//	sptr->calculateArea();
//	sptr->calculatePeri();
//	sptr->printData();

//=====================================================
//	circle c1(5);
//	c1.calculateArea();
//	c1.calculatePeri();
//	c1.printData();
////=======================================================
//	rect r1(2,3);
//	r1.calculateArea();
//	r1.calculatePeri();
//	r1.printData();
////===========================================================
//	shape s1;
//	s1.calculateArea();
//	s1.calculatePeri();
//	s1.printData();
}








