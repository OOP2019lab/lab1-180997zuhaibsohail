// Q NO.2.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int a;
	int r;
	cout<<"enter size of array :"<<endl;
	cin>>r;
	int *array = new int [r];
	for(int i=0;i<r;i++)
	{
		cin>>array[i];
	}
	for (int i = 0 ; i < r - 1 ; i++)
	{
	for(int k=0;k<r - 1 ;k++)
	{
		if(array[k]>array[k+1])
		{
			a=array[k];
			array[k]=array[k+1];
			array[k+1]=a;
		}
	}
	}
	cout<<"Array in ascending order is :"<<endl;
	for(int j=0;j<r;j++)
	{
		cout<<array[j]<< " ";
	}

	system ("pause");


	return 0;
}

