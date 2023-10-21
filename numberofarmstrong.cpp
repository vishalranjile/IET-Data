#include<iostream>
using namespace std;
int main()
{
	int num=1;
	int count=0;
	
	int onum=num;
	int sum=0;
	while(num!=0&&num<999)
	{
		int rem=num%10;
		num=num/10;
	 sum=sum+rem*rem*rem;
	 num++;
	 onum++;
	 if(onum==sum)
      count ++;  
	}
	
    cout<<"total numbers are"<<count;
}
