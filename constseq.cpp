#include<iostream>
using namespace std;

class A
{
	public:
	A()
	{
		cout<<"in constructor of A \n";
 	}
	 
	~A()
	{
		cout<<"in destructor of A \n";
	} 		
};

class B:public A
{
	public:
	B()
	{
		cout<<"in constructor of B \n";
 	}
	 
	~B()
	{
		cout<<"in destructor of B \n";
	} 		
};

class C:public A
{
	public:
		C()
	{
		cout<<"in constructor of C \n";
 	}
	 
	~C()
	{
		cout<<"in destructor of C \n";
	} 		
};

int main()
{
	C c1;
	B b1;
}
