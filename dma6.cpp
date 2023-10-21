#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		complex()
		{
			real=5;
			imag=5;
		}
		complex(int r,int i)
		{
			real=r;
			imag=i;
		}
		void show()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	complex *ptr=new complex();
	ptr->show();
	complex *ptr1=new complex(10,20);
	ptr1->show();
}
