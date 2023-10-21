#include<iostream>
using namespace std;
int main()
{
	char *str;
	int n;
	cout<<"enter no of char"<<endl;
	cin>>n;
	str=new char[n+1];
	cout<<"enter name"<<endl;
	cin>>str;
	cout<<str;
}
