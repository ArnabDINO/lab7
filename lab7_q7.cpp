/*
7. Write a C++ program to check whether a number is palindrome or not using recursion
*/

#include<iostream>
using namespace std;

int f_print(int &numb,int &rev)
{
	if (rev==numb)
	{
		cout<<numb<<" is a palindrome."<<endl;
	}
	else
	{
		cout<<numb<<" is not a palindrome."<<endl;
	}
}

int f_rev(int &num,int &rev,int &numb)
{
	rev=10*rev+(num%10);
	num=num/10;
	if(num>0)
	{
		f_rev(num,rev,numb);
	}
	else
	{
		f_print(numb,rev);
	}
}

int main()
{
	int num,rev=0;
	cout<<"Give a number"<<endl;
	cin>>num;
	int numb=num;
	f_rev(num,rev,numb);
	return 0;
}
