#include<iostream>
using namespace std;


int main(void)
{
    int n1,n2;
    int res;
    cout<<"enter n1 : ";
    cin>>n1;
    cout<<"\n enter n2 :";
    cin>>n2;
    try
    {
       if(n2==0)
        //throw 1; //1 is int value
        //throw 1.1;
        //throw 'A';
        throw 1.1f;
        else
        {
            res=n1/n2;
            cout<<" \n Result :"<<res<<endl;
        }
    }
    catch(int i)
    {
        //corrective action
        cout<<"N2 value can not be zero";
    }
    catch(double d)
    {
        //corrective action
        cout<<"Double : N2 value can not be zero";
    }
    catch(char ch)
    {
        //corrective action
        cout<<"char : N2 value can not be zero";
    }
    catch(...) //generic catch block
    {
        cout<<"Inside generic : N2 Value can not be zero";
    }



    return 0;
}


/*


int main(void)
{
     int n1,n2;
    int res;
    cout<<"enter n1 : ";
    cin>>n1;
    cout<<"\n enter n2 :";
    cin>>n2;
    res=n1/n2;
    cout<<"Res "<<res<<endl;
    return 0;
}

*/