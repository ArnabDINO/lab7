/*
8. Write a C++ program to find sum of digits of a given number using recursion.
*/
#include<iostream>
using namespace std;


int f_print(int &i)
{
	cout<<"the number of digits in the given number is "<<i<<endl;
}

int f_rev(int &num,int &rev,int &i)
{
	rev=10*rev+(num%10);
	num=num/10;
	i++;
	if(num>0)
	{
		f_rev(num,rev,i);
	}
	else
	{
		f_print(i);
	}
}

int main()
{
	int i=0,num,rev=0;
	cout<<"Give a number"<<endl;
	cin>>num;
	f_rev(num,rev,i);
	return 0;
}
