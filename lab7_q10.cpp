/*
10. Write a C++ program to generate nth Fibonacci term using recursion
*/

#include<iostream>
using namespace std;

void fibo(int &n,int &a1,int &a2,int &a3,int &i)
{
	a3=a1+a2;
	a1=a2;
	a2=a3;
	i++;
	if(i<n)
	{
		fibo(n,a1,a2,a3,i);
	}
	else
	{
		cout<<"the required term is "<<a3;
	}
}


int main()
{
	int n,a2=1,a1=0,a3,i=2;
	cout << "which term do you want?"<<endl;
	cin>>n;
	if(n==0)
	{
		cout<<"error";
	}
	else if(n==1)
	{
		cout<<"0";
	}
	else
	{
	
		fibo(n,a1,a2,a3,i);
	}
	return 0;
}
