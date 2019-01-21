// Q NO.1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int x,y;//initialing variables
	int *p,*q,*r; //initializing pointers
	x=77;
	y=44;
	p=&x;
	q=&y;
	cout<<"The value of x is : "<<x<<endl;
	cout<<"the value of y is : "<<y<<endl;
	cout<<"The address of variable x is : "<<p<<endl;
	cout<<"The address of variable y is : "<<q<<endl;
	cout<<"The value represented by pointer p is : "<<*p<<endl;
	cout<<"The value represented by pointer q is : "<<*q<<endl;
	int z;
	z=x;
	x=y;
	y=z;
	cout<<"             After swapping              "<<endl;
	cout<<"The value of x is : "<<x<<endl;
	cout<<"the value of y is : "<<y<<endl;
	cout<<"The address of variable x is : "<<p<<endl;
	cout<<"The address of variable y is : "<<q<<endl;
	cout<<"The value represented by pointer p is : "<<*p<<endl;
	cout<<"The value represented by pointer q is : "<<*q<<endl;
	r=p;
	p=q;
	q=r;
	cout<<"The value of x is : "<<x<<endl;
	cout<<"the value of y is : "<<y<<endl;
	cout<<"The address of variable x is : "<<p<<endl;
	cout<<"The address of variable y is : "<<q<<endl;
	cout<<"The value represented by pointer p is : "<<*p<<endl;
	cout<<"The value represented by pointer q is : "<<*q<<endl;
	system("pause");
	return 0;
}

