/*
6. Write a C++ program to find reverse of any number using recursion
*/

#include<iostream>
using namespace std;


int f_print(int &rev)
{
	cout<<"the required reverse of the given number is "<<rev<<endl;
}

int f_rev(int &num,int &rev)
{
	rev=10*rev+(num%10);
	num=num/10;
	if(num>0)
	{
		f_rev(num,rev);
	}
	else
	{
		f_print(rev);
	}
}

int main()
{
	int num,rev=0;
	cout<<"Give a number"<<endl;
	cin>>num;
	f_rev(num,rev);
	return 0;
}
