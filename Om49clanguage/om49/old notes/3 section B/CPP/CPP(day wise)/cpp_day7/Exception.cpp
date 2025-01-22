/*
 * Exception.cpp
 *
 *  Created on: 25-Oct-2019
 *      Author: pradnya
 */
#include <iostream>
using namespace std;
int main()
{
	int n,d,res=0;
	cout<<"enter n and d";
	cin>>n>>d;
	try
	{
		if(d==0)
		{
			throw 22.2;
		}
		res=n/d;
		cout<<"result="<<res;
	}
	catch (int e)
	{
		cout<<"\ninvalid input.... (int)="<<e;
	}
	catch (char e)
	{
		cout<<"\ninvalid input.... (char)="<<e;
	}
	catch(...)
	{
		cout<<"\ninvalid input.... (...)=";
	}
}











