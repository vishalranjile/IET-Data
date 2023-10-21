#include<iostream>
using namespace std;
class Date
{
	int Day,Month,Year;
	public:
		Date()
		{
			Day=10;
			Month=11;
			Year=1999;
		}
		
		Date(int d,int m,int y)
		{
			cout<<"in date constructor \n";
			Day=d;
			Month=m;
			Year=y;
		}
		
		void display()
		{
			cout<<"day "<<Day<<endl;
			cout<<"month"<<Month<<endl;
			cout<<"year "<<Year<<endl;
		}
};

class Employee
{
	int Id;
	float Basicsal;
	Date Bdate;
	public:
		Employee()
		{
			Id=1;
			Basicsal=10000;
			Bdate=Date();
			
		}
		Employee(int,int,int,int,int);
		void display();
		
};
Employee::Employee(int i,int sal,int d,int m,int y):Bdate(d,m,y)
{
	cout<<"in emp constructor \n";
	Id=i;
	Basicsal=sal;
}
void Employee::display()
{
	cout<<"id "<<Id<<endl;
	cout<<"salary "<<Basicsal<<endl;
	Bdate.display();
}

int main()
{
	Employee e1;
	e1.display();
	Employee e2(2,20000,12,10,1999);
	e2.display();
	return 0;
}
