#include<iostream>
using namespace std;


/*
//operator function as a non member function of the class
class Point
{
    public:
    int x,y;
    public:
    Point()
    {
        this->x=10;
        this->y=10;
    }

    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void disp()
    {
        cout<<" X = "<<this->x<<" Y ="<<this->y<<endl;

    }

};


Point operator+(Point &pt1,Point &pt2) //global / non member function
{
    //::operator+(pt1,pt2)
    //if we want to overload binary operator, using non member function  
    //then operaator+() takes two arguments

    Point temp;
    temp.x=pt1.x+pt2.x;
    temp.y=pt1.y+pt2.y;
    return temp;
}

int main(void)
{
    Point pt1(20,20);
    Point pt2(30,30);

    Point pt3;
    pt1.disp();
    pt2.disp();
   
    pt3=pt1+pt2;  //+ binary operator //implicitely 
    //pt3=::operator+(pt1,pt2);//explicit call 
     pt3.disp();
   
    
    return 0;
}
*/


//operator function as a member function of the class

class Point
{
    public:
    int x,y;
    public:
    Point()
    {
        this->x=10;
        this->y=10;
    }

    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void disp()
    {
        cout<<" X = "<<this->x<<" Y ="<<this->y<<endl;

    }
    //pt3=pt1+pt2;
    //pt3 = pt1.operator+(pt2);
    //pt1 is current object
    //pt2 is other object as a argument 

    Point operator+(Point &other)
    {
        

        Point temp;
        temp.x=this->x+other.x; 
        temp.y=this->y+other.y;
        return temp;

    }


    Point operator-(Point &other)
    {

        Point temp;
        temp.x=this->x-other.x; 
        temp.y=this->y-other.y;
        return temp;

    }
    Point operator*(Point &other)
    {

        Point temp;
        temp.x=this->x*other.x; 
        temp.y=this->y*other.y;
        return temp;
    }

Point operator/(Point &other)
    {

        Point temp;
        temp.x=this->x/other.x; 
        temp.y=this->y/other.y;
        return temp;

    }





};


int main(void)
{
    Point pt1(40,50);
    Point pt2(30,30);
    Point pt3;
    pt1.disp();
    pt2.disp();

    cout<<"\n calling operator +";
    pt3=pt1+pt2;

    //pt3 = pt1.operator+(pt2);
    //pt1 is my current object on which operator+() is been called
    //pt1 is this object

    pt3.disp();
    cout<<"\n calling operator -";
    pt3=pt1-pt2;
    pt3.disp();


    cout<<"\n calling operator *";
    pt3=pt1*pt2;
    pt3.disp();

    cout<<"\n calling operator /";
    pt3=pt1/pt2;
    pt3.disp();

    return 0;

}



/*
//operator function as a non member function of the class
class Point
{
    public:
    int x,y;
    public:
    Point()
    {
        this->x=10;
        this->y=10;
    }

    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void disp()
    {
        cout<<" X = "<<this->x<<" Y ="<<this->y<<endl;

    }

};


Point operator+(Point &pt1,Point &pt2) //global / non member function
{
    //::operator+(pt1,pt2)
    //if we want to overload binary operator, using non member function  
    //then operaator+() takes two arguments

    Point temp;
    temp.x=pt1.x+pt2.x;
    temp.y=pt1.y+pt2.y;
    return temp;
}

int main(void)
{
    Point pt1(20,20);
    Point pt2(30,30);

    Point pt3;
    pt1.disp();
    pt2.disp();
   
    pt3=pt1+pt2;  //+ binary operator 
    
     pt3.disp();
   
    
    return 0;
}
*/



/*
class Point
{
    private:
    int x,y;
    public:
    Point()
    {
        this->x=10;
        this->y=10;
    }

    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void disp()
    {
        cout<<" X = "<<this->x<<" Y ="<<this->y<<endl;

    }

};

int main(void)
{
    Point pt1(20,20);
    Point pt2(30,30);

    Point pt3;
    pt1.disp();
    pt2.disp();
    pt3.disp();


     pt3=pt1+pt2;  //pt1 and pt2 are objects //ERROR
    //addition of objects 
    
    return 0;
}

*/