#include<iostream>
using namespace std;

template <class T,class T1>
void SWAP(T a,T1 b)
{
	float temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping "<<a<<" "<<b;
}

int main()
{
	 float a=10;
	float b=25.38f;
	cout<<"before swapping "<<a<<" "<<b<<endl;
	SWAP(a,b);	
}
