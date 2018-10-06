/*
4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
*/

#include<iostream>
using namespace std;

void f_print(long &sum)
{
	cout<<"The sum is "<<sum<<"."<<endl;
}

void f_sum(long &n,long &sum,long &i)
{
	sum+=i;
	i++;
	if(i<=n)
	{
		f_sum(n,sum,i);
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
	cout<<"Give the limiting number"<<endl;
	cin>>n;
	f_sum(n,sum,i);
	return 0;
}
