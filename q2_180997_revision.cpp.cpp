//Q NO.2 : power


#include <iostream>
#include <fstream>
using namespace std;

int product(int s,int d )
{
	int a=1;
	for(int v=0;v<d;v++)
    {
	    a=a*s;
	}

	return a;
}
int main()
{
	int s , n, z;
	ofstream fout;
	fout.open("output.txt");

	ifstream fin;
	fin.open("input.txt");
	fin>>s;
	for (int i=0;i<s;i++)
	{
		fin>>n>>z;
		cout<<product(n,z)<<endl<<endl;
		fout<<product(n,z)<<endl<<endl;//due to firewall issue output file is not forming
	}
	system("pause");
	return 0;
}