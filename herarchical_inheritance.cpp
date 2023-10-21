#include<iostream>
using namespace std;
class Student
{
	int roll,m1,m2;
	public:
		void accept1()
		{
			cout<<"enter roll number,m1 and m2"<<endl;
			cin>>roll>>m1>>m2;
		}
		int get1()
		{
			return m1+m2;
		}
};
class Sports
{
	int m3;
	public:
	void accept2()
	{
		cout<<"enter sports marks "<<endl;
		cin>>m3;
	}
	int get2()
	{
		return m3;
	}
};
class Result:public Student,public Sports 
{
	int total;
	float avg;
	public:
	
	 
	void display()
	{
		total= Student::get1() + Sports::get2();
		avg=(float)total/3;
	    cout<<"total is "<<total<<endl;
		cout<<"avg is "<<avg<<endl;
	}
	
};
int main()
{

	Result r;
	r.accept1();
	r.accept2();
	r.display();
	
	return 0;
}
