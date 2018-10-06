/*
3. Write a C++ program to print all even or odd numbers in given range using recursion.
*/

#include<iostream>
using namespace std;

void f_oddprint(long &n,int &i)
{
	
	if(i<n)
	{
		if (i%2==1)
		{cout<<i<<", ";}
		i++;
		f_oddprint(n,i);
	}
	else if(i==n)
	{
		if (i%2==1)
		{cout<<i<<", ";}
		cout<<"end of series"<<endl;
	}
	else
	{
		cout<<"ERROR! ERROR! ERROR!/n PROGRAM TERMINATED."<<endl;
	}
}

void f_evenprint(long &n,int &i)
{
	
	if(i<n)
	{
		if (i%2==0)
		{cout<<i<<", ";}
		i++;
		f_evenprint(n,i);
	}
	else if(i==n)
	{
		if (i%2==0)
		{cout<<i<<", ";}
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
	bool choice;
	cout<<"Give the limiting number"<<endl;
	cin>>n;
	cout<<"give 0 for odd series and 1 for even series"<<endl;
	cin>>choice;
	if (choice==0)
	{
		f_oddprint(n,i);
	}
	if (choice==1)
	{
		f_evenprint(n,i);
	}
	return 0;
}
