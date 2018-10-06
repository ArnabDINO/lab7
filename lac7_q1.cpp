/*
1. Write a C++ program to find power of any number using recursion.
*/

#include<iostream>
using namespace std;

void f_ans(long &Ans)
{
	cout<<"the answer is "<<Ans<<endl;
}

void f_p0w(int &num,int &p0w,long &Ans,int &i)
{

	if(i<p0w)
	{
		Ans=Ans*num;
		i++;
		f_p0w(num,p0w,Ans,i);
	}
	else if(i==p0w)
	{
		f_ans(Ans);
	}
	else
	{
		cout<<"ERROR! ERROR! ERROR!/n Program terminated ;-)"<<endl;
	}
}



int main()
{
	int num,p0w,i=0;
	long Ans=1;
	cout<<"give a number"<<endl;
	cin>> num;
	cout<<"give the required power"<<endl;
	cin>> p0w;
	f_p0w(num,p0w,Ans,i);
	return 0;
}
