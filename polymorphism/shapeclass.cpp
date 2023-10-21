#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void area(int,int)
	{
		cout<<"inside void area of shape\n";
	}
	virtual void area(int)
	{
		cout<<"inside void area of shape1\n";
	}
	
};

class rect:public shape
{
	int len,bre,result;
	public:
	void area(int len,int bre)
		{result=len*bre;
			cout<<"rectangle area is "<<result<<endl;
		}
	
};

class square:public shape
{public:
	int result;
	void area(int side)
		{result=side*side;
			cout<<"square area is "<<result<<endl;
		}
};
int main()
{
	shape *ptr;
	shape s1;
	ptr =&s1;
	ptr->area(1,1);
	rect r1;
	ptr=&r1;
	ptr->area(10,15);
	ptr =&s1;
	ptr->area(1);
	square s3;
	ptr=&s3;
	ptr->area(20);
}
