#include<iostream>
using namespace std;
int main()
{
	int static sum_e=0,sum_o=0;
	for(int i=2;i<=20;i++)
	{
		
		if(i%2==0)
		{
			sum_e=sum_e+i;
		}
		else
		{
			sum_o=sum_o+i;
		 } 
		
	}
	cout<<"sum of even is "<<sum_e<<endl;
	cout<<"sum of odd is "<<sum_o<<endl;
}
