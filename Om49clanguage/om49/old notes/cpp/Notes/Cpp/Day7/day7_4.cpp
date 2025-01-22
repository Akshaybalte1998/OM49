#include<iostream>
using namespace std;

class Math
{  

    private:
    int n1,n2;
    public:
    Math()
    {
        this->n1=10;
        this->n2=20;
    }

    Math(int n1,int n2)
    {
        this->n1=n1;
        this->n2=n2;
    }
    void add() //non static member function
    {
        cout<<"Addition : "<<this->n1+this->n2<<endl;
    }

    static void sum(int n1,int n2) //static member function
    {
        int res=n1+n2;
        cout<<" Result "<<res<<endl;
    }

};

int main(void)
{
    Math m;
    m.add();

    Math m1(40,50);
    m1.add();

   // m1.sum(70,30); //generate result
    Math::sum(50,300);
    //Math.sum(60,60); //dot operator is not allowed with static 

    return 0;
}