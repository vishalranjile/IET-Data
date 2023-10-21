#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number\n";
	cin>>num;
	int onum=num;
	int sum=0;
	while(num!=0)
	{
		int rem=num%10;
		num=num/10;
	 sum=sum+rem*rem*rem;
	}
	if(onum==sum)
	cout<<"its armstrong number";
	else
	cout<<"NOT armstrong";
}
