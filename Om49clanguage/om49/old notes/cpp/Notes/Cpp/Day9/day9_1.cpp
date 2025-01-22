#include<iostream>
using namespace std;
#include<iomanip>


template <class T>//T : typename

class Array
{
    private:
        int size;
        T *arr;
    public:
        Array():size(0),arr(NULL){}
        Array(int size)
        {
            this->size=size;
            this->arr=new T[this->size];

            //new memory dynamically
            //assume if we pass T <int>
            //this->arr=new int[this->size];

             //assume if we pass T <char>
            //this->arr=new char[this->size];

        }

        void acceptRecord()
        {
            int i;
            cout<<"\n Enter Array Elements ";
            for(i=0;i<this->size;i++)
            cin>>arr[i];
        }

        void printRecord()
        {
          int i;
            cout<<"\n Array Elements are : ";
            for(i=0;i<this->size;i++)
            cout<<setw(7)<<arr[i];
         
        }
        ~Array()
        {
            cout<<"\n Destructor called "<<endl;
        }
};

int main(void)
{
   Array<char> a1(5); //class Template
   //Array is my class name
   //Template typename is char
   //a1 is object of class
   //5 is size of array of type char

   a1.acceptRecord();
   a1.printRecord();

   Array<int> a2(4);
   a2.acceptRecord();
   a2.printRecord();
    return 0;
}