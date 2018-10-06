/*
9. Write a C++ program to find factorial of any number using recursion.
*/

#include<iostream>
using namespace std;

void f_print(long &fac)
{
	cout<<"The factorial is "<<fac<<"."<<endl;
}




void f_fac(long &i,long &num,long &fac)
{
	fac*=num;
	num--;
	if (num>0){f_fac(i,num,fac);}
	else{f_print(fac);}
	
	/*for(;i<=num;i++)
	{
		fac*=i;
	}*/
}


int main()
{
	long num,fac=1;
	long i=1;
	cout<<"give the limiting number"<<endl;
	cin>>num;
	f_fac(i,num,fac);
	
	return 0;
}
