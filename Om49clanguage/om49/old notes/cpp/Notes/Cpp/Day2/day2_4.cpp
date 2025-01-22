#include<iostream>
using namespace std;

int main(void)
{
    cout<<"hello";
  
    return 0;
}



/*
namespace na
{
    int num1=50;
}
int main(void)
{
    using namespace na; //using namespace Directive
    printf("%d",num1);
    
    return 0;
}

*/



/*
void disp();
int main(void)
{
    disp();
    return 0;
}
//we cannot define namespacec within the function

void disp() 
{
    namespace na //error: ‘namespace’ definition is not allowed here
    {
        int num1=100;
    }

}

*/


/*
namespace NA
{
    int num1=100;
    namespace NB
    {
        int num2=200;
        namespace NC
        {
            int num3=300;
        }
    }
}

//NA::NB::NC::num3
*/



/*
namespace NA
{
    int num1=100;
    namespace NB
    {
        int num2=200;

    }
}
namespace nc
{
    int num3=300;
}
int main(void)
{

    printf("na::num1 = %d ",NA::num1);
    printf("\n NA::NB::num2=%d",NA::NB::num2);
    printf("\n nc::num3=%d\n ",nc::num3);


    return 0;
}
*/




/*

int num1=1000; //global variable 
namespace na
{
    int num1=400;
}

namespace nb
{
    int num1=500;
}

int main(void)
{
    int num1=20;//local variable
    printf("\n Num1  = %d",num1);
    //2. Use of SCOPE RESOLUTION IS to ACCESS GLOBAL VARIABLE
    printf("\n Global Variable = %d",::num1);
    printf("\n na::num1 = %d ",na::num1);
    printf("\n nb::num1 = %d ",nb::num1);
    return 0;
}
*/





/*
int num1=1000; //global variable 
int main(void)
{

    printf("\n Global Variable = %d",num1);
    return 0;
}
*/




/*
// same namespace in one single program
//but redefinition of variables inside the namespace is not allowed
namespace na
{
    int num1=10;
    int num2=20;
}

namespace na
{
     int num3=40;
}

namespace nb
{
    int num1=100;
    int num2=200;
    int num3=300;
}

int main(void)
{
    printf("\n na::num1=%d",na::num1);
    printf("\n na::num2=%d",na::num2);
    printf("\n na::num3=%d",na::num3);
    printf("\n nb::num1=%d",nb::num1);
    printf("\n nb::num2=%d",nb::num2);
    printf("\n nb::num3=%d \n",nb::num3);

    return 0;
}
*/


/*
//na is namespace and it is having num1 as a variable inside it
namespace na //namespace definition
{
    int num1=10;
    int num2=40;
}

namespace nb
{
    int num1=50;
}


//SCOPE RESOLUTION OPERATOR (::)
//1. TO ACCESS THE NAMESPACE VARIABLE


int main(void)
{
    //
   printf("%d",na::num1);
    printf("\n %d",na::num2);
    //cout<<"\n "<<nb::num1;
    printf("\n %d",nb::num1);
    return 0;
}
*/
