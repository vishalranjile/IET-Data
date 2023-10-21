#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,m;
	cout<<"enter no of subject "<<endl;
	cin>>n;
	cout<<"enter no of char "<<endl;
	cin>>m;
	int* marks=new int[n];
	char* name=new char[m+1];
	for(int i=0;i<n;i++)
	{
		cin>>marks[i];
		
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	float avg=(float)sum/n;
	cout<<"enter the name "<<endl;
	cin>>name;
	cout<<"name is"<<name<<endl;
	cout<<"avg is "<<avg;
	delete[] marks;
	delete[] name;
}
