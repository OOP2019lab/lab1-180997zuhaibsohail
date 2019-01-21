// Q NO.3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include<fstream>
using namespace std;

void sorting(int a[], int size)
{
	for (int i = 0 ; i < size - 1 ; i++)
	{
	for(int k=0;k<size - 1 ;k++)
	{
		if(a[k]>a[k+1])
		{
			int s=*(a+k);
			*(a+k)=*(a+k+1);
			*(a+k+1)=s;
		}
	}
	}
	ofstream fin("results_yourrollnumber.txt");
	
	fin<<"Array in ascending order is :"<<endl;
	for(int j=0;j<size;j++)
	{
		fin<<*(a+j)<< " ";
	}
}

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
	sorting(array,r);

	system ("pause");


	return 0;
}

