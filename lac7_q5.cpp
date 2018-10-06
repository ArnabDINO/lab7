/*
5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
*/

#include<iostream>
using namespace std;

void f_print(long &sum)
{
	cout<<"The sum is "<<sum<<"."<<endl;
}

void f_sumo(long &n,long &sum,long &i)
{
	if (i%2==1)
	{sum+=i;}
	i++;
	if(i<=n)
	{
		f_sumo(n,sum,i);
	}
	else if (i==(n+1))
	{
		f_print(sum);
	}
	else
	{
		cout<<"ERROR! ERROR! ERROR!/n PROGRAM TERMINATED."<<endl;
	}
}

void f_sume(long &n,long &sum,long &i)
{
	if (i%2==0)
	{sum+=i;}
	i++;
	if(i<=n)
	{
		f_sume(n,sum,i);
	}
	else if (i==(n+1))
	{
		f_print(sum);
	}
	else
	{
		cout<<"ERROR! ERROR! ERROR!/n PROGRAM TERMINATED."<<endl;
	}
}


int main()
{
	long n,sum=0;
	long i=1;
	bool choice;
	cout<<"Give the limiting number"<<endl;
	cin>>n;
	cout<<"give 0 for sum of odd series and 1 for sum of even series"<<endl;
	cin>>choice;
	if (choice==0)
	{
		f_sumo(n,sum,i);
	}
	if (choice==1)
	{
		f_sume(n,sum,i);
	}
	return 0;
}
