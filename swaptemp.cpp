#include<iostream>
using namespace std;

template <class T>
void SWAP(T a,T b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping "<<a<<" "<<b;
}

int main()
{
	double  a=10.25,b=25.65;
	cout<<"before swapping "<<a<<" "<<b<<endl;
	SWAP(a,b);	
}
