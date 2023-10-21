#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char *ptr;
	public:
		 string1(char *sptr)
		{
			len=strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}
		void disp()
	{
		cout<<"name is "<<ptr<<endl<<"len is "<<len<<endl;
	}
	~ string1()
	{
		cout<<"dist is called "<<endl;
		if(ptr)
		delete [] ptr;
		ptr=NULL;
	}
};
int main()
{
	string1 c2("vishal");
	c2.disp();
}
