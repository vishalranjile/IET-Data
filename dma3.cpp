#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter array size"<<endl;
	cin>>n;
	int *p=new int[n];
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i];
	}
	delete[] p;
}
