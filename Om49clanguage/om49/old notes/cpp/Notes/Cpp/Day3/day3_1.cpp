#include<iostream>
using namespace std;
#include<iomanip>

/*
"Sunbeam Pune"
PreCAT   OM3 & OM5
Day\03
*/

int main(void)
{

    cout<<"\"Sunbeam Pune\""<<endl;//escape sequence
    cout<<"PreCAT \t OM3 & OM5"<<endl;
    cout<<"Day\\03"<<endl;
    cout<<"Hello OM\b3"<<endl;//\b back slash character constant
    cout<<"Good Evening\rhello"<<endl;
     // helloEvening
    // \r 
    //1. \r takes the curson on first character of the same line and it overwrites the contents
    //2. \r takes the cursor on next line and start writting the contents


    return 0;
}



/*
int main(void)
{
    int num=10,num2=200;
    cout<<setw(8)<<num<<setw(8)<<num2<<endl;
    //cout<<setw(-8)<<num<<setw(-8)<<num2<<endl;
    return 0;
}

*/


/*
int main(void)
{
    double d =425.678 ;
    cout<<setprecision(4)<<d<<endl;
    return 0;
}
*/


/*
int main(void)
{
     char ch;
    cout<<"Enter character : ";
    cin>>ch;
    cout<<"Char  = "<<ch<<endl;
    return 0;
}
*/


/*
int main(void)
{
    double d=5.56789;
    //cout<<d<<endl;
    cout<<setprecision(3)<<d<<endl;
    
    return 0;
}
*/

/*
int main(void)
{
    int num1=50,num2=40000,num3=10;
   // cout<<num1<<" "<<num2<<" "<<num3<<endl;
    // cout<<setw(8)<<num1<<setw(8)<<num2<<setw(8)<<num3<<endl;
    //printf("%8d%8d%8d",num1,num2,num3);
    
    cout<<setw(8)<<setfill('#')<<num1<<endl;
    cout<<setw(10)<<setfill('*')<<num2<<endl;

    return 0;
}

*/

/*
int main(void)
{
    int num=10;
    //cout<<"Num = "<<num;
    //cout<<"\n Num = "<<setbase(10)<<num<<"\n";
    //cout<<"\n Num in octal format : "<<setbase(8)<<num<<"\n";
    //cout<<"\n Num in hexa decimal format : "<<setbase(16)<<num<<"\n";
       
    cout<<"\n Num = "<<dec<<num<<endl; // either "\n " OR endl
    cout<<"\n Num in octal format : "<<oct<<num<<endl;
    cout<<"\n Num in hexa decimal format : "<<hex<<num<<endl;
    


    return 0;

}
*/



/*
int main(void)
{
    int num1,num2;
    int sum;

    cout<<"Enter Number 1 value :";
    cin>>num1;

    cout<<"Enter Number 2 value :";
    cin>>num2;

//    sum=num1+num2;

//  cout<<"Addition = "<<sum<<"\n";
    cout<<"Addition = "<<num1+num2<<"\n";
        return 0;
}
*/

/*
int main(void)
{
    int num;
    cout<<"hello";// <<insertion operator
    //std::ostream std::cout
    //cout is object/variable of std namespace 
    //ostream is class defined within std namespace

    cout<<"Enter Number : ";
    cin>>num; //scanf("%d",&num);
    //extraction operator
    //std::istream std::cin

    //printf("Number = %d",num); 
    cout<<"Number = "<<num<<"\n";


    return 0;
}

*/