#include<iostream>
using namespace std;
class complex
{
	public:
		void show() const
		{
			cout<<"hello"<<endl;
			
		}
		void show() 
		{
			cout<<"bye"<<endl;
			
		}
};
int main()
{
   complex c1;
   c1.show();
   const complex c2;
 c2.show();  	
}
