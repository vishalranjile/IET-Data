#include<iostream>
using namespace std;
class Temp
{int x;
public:
	void get()
	{
		cout<<"enter a number "<<endl;
		cin>>x;
	}
	void show()
	{
		cout<<"value of num is "<<x<<endl;
	}
	friend void manipulate(Temp &);
	
};
void manipulate(Temp &b)
{cout<<"in frnd fun"<<endl;
	b.x=b.x+10;
}
int main()
{
	Temp b;
	b.get();
	manipulate(b);
	b.show();
	
}
