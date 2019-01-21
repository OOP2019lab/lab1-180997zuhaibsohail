//Q NO.1: pattern


#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cout<<"enter the number"<<endl;
	cin >> n;
	for(int k=1;k<=n;k++)
	{
		for (int h=0;h<k;h++)
			{
				cout<<k;
		    }
		for (int h=0;h<2*(n-k);h++)
			{
				cout<<"*";
		    }
		for (int h=0;h<k;h++)
			{
				cout<<k;
	        }
		cout<<endl;
	}
	for(int k=1;k<n;k++)
	{
		for(int h=0;h<n-k;h++)
			{
				cout<<k+n;
		    }
		for(int h=0;h<2*k;h++)
			{
				cout<<"*";
		    }
		for(int h=0;h<n-k;h++)
			{
				cout<<k+n;
		    }

		cout<<endl;
	}
	system("pause");
	return 0;
}

