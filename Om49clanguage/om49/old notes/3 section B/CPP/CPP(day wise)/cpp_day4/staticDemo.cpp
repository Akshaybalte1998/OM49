
#include <iostream>
using namespace std;
 class product
 {
	string productName;
	static int price;//static data member
 public:
	product(string name="")
 	 {
		this->productName=name;
		//this->price=49;
 	 }
	void print()
	{
		cout<<"\n productName="<<productName<<" price="<<price;
	}
	static void updatePrice(int updatedPrice)//static member function
	{
		price=updatedPrice;
	}
 };
 int product::price=49;
int main()
{
	product::updatePrice(65);
	product p1("pen");
	p1.print();
	//p1.updatePrice(65);
	product p2("penset");
	p2.print();
	product p3("marker");
	p3.print();
	product p4("boll");
	p4.print();
	product p5("bat");
	p5.print();
	p1.print();
	return 0;
}


