#include<iostream>
using namespace std;


typedef struct Employee
{
    //WHEN WE WRITE DATA MEMBERS AND MEMBER FUNCTIONS
    //IN A SINGLE SCOPE THAT IS CALLED AS BINDING
    
    private:   //DATA SECURITY 
        int id;   // DATA MEMBERS OF STRUCTURE 
        int salary;
    public:  
        void accept() // MEMBER FUNCTIONS
        {
            printf("Enter ID : ");
            scanf("%d",&id);
            printf("Enter salary : ");
            scanf("%d",&salary);  
        }
        void disp()
        {
            printf("ID = %d Salary = %d \n",id,salary);
        }
}EMP;

int main(void)
{
    EMP e;
    e.accept();
    e.disp();

    EMP e2;
   // e2.id=2; //id’ is private within this context
   // e2.salary=60000;//salary’ is private within this context
    return 0;
}



/*
typedef struct Employee
{
    int id;
    int salary;
    void accept()
    {
        printf("Enter ID : ");
        scanf("%d",&id);
        printf("Enter salary : ");
        scanf("%d",&salary);  
    }
    void disp()
    {
        printf("ID = %d Salary = %d",id,salary);
    }
}EMP; //end of struture 

int main(void)
{
    //accept();//error: ‘accept’ was not declared in this sc
    //disp(); //error: ‘disp’ was not declared in this scope
    EMP e;//variable of type structure 
    e.accept(); //accessing function using dot operator
    e.disp();

    EMP e2;
    e2.id=2;
    e2.salary=50000;
    e2.disp();
    return 0;
}
*/