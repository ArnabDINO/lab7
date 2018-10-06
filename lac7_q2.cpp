/*
2. Write a C++ program to print all natural numbers between 1 to n using recursion.
*/

#include<iostream>
using namespace std;

void f_print(long &n,int &i)
{
	
	if(i<n)
	{
		cout<<i<<", ";
		i++;
		f_print(n,i);
	}
	else if(i==n)
	{
		cout<<i<<", ";
		cout<<"end of series"<<endl;
	}
	else
	{
		cout<<"ERROR! ERROR! ERROR!/n PROGRAM TERMINATED."<<endl;
	}
}

int main()
{
	long n;
	int i=1;
	cout<<"Give the limiting number"<<endl;
	cin>>n;
	f_print(n,i);
	return 0;
}
