#include<iostream>
using namespace std;
int main()
{
	int i=2,n1=0,n2=1;
	int n,n3;
	cout<<"enter the num "<<endl;//4
	cin>>n;
	//cout<<n1<<endl<<n2<<endl;
	
	
	while(i<=n)//2<=4
	{
		n3=n1+n2;//0+1=1
		n1=n2;//n1=1
		n2=n3;//n2=1
		//cout<<n3<<endl;
		i++;
	}cout<<n3<<endl;
}
