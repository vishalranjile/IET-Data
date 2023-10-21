#include<iostream>
#include<string.h>
using namespace std;
class Address
{
	char city[20];
	int pin;
	public:
		Address()
		{
			
		}
		Address(char *a,int p)
		{
			strcpy(city,a);
			pin=p;
		}
		void disp()
		{
			cout<<"city name is "<<city<<"pin is "<<pin<<endl;
		}
};
class Student
{
	char name[20];
	int roll;
	Address adr;
	public:
		Student()
		{
			
		}
		Student (char *b,int r,char* a,int p):adr( a, p)
		{
			strcpy(name,b);
			roll=r;
		}
		void display()
		{
			cout<<"name of the student is "<<name<<" roll number is "<<roll<<endl;
			adr.disp();
			
		}
};
int main()
{
	Student s1("abc",1,"pune",1234);
	s1.display();
	
}
