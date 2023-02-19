#include<iostream>
using namespace std;
class Date
{
   int d,m,y;
    public:
	 Date(int a,int b,int c)
	  {
	  	d=a;
	  	m=b;
	  	y=c;
	  }	
	void Display()
	{
		cout<<d<<"/"<<m<<"/"<<y<<endl;
	}
};
int main()
{
	Date d1(27,1,2023);
	d1.Display();
	return 0;
}
