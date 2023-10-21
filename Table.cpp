#include<iostream>
using namespace std;
int main()
{
	int num,i=1;
	cout<<"enter the number:"<<endl;
	cin>>num;
	while(i<11)
	{
		int num1=num*i;
		cout<<"num "<<num<<"*"<<i<<"="<<num1<<endl;
		i++;
	}
}
