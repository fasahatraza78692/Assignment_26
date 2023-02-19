#include<iostream>
using namespace std;
class Complex
{
   int a,b;
    public:
	 void SetData(int x,int y)
   	  {
	  	a=x;
	  	b=y;
	  }	
	 void ShowData()
	  {
	  	cout<<a<<"+"<<b<<"i"<<endl;
	  }
	Complex add(Complex c)
	  {
	  	Complex temp;
	  	temp.a=a+c.a;
	  	temp.b=b+c.b;
	  	return temp;
	  }
};
int main()
{
	Complex c1,c2,c3;
	c1.SetData(3,5);
	c2.SetData(2,7);
	c3=c1.add(c2);
	c3.ShowData(); 
	return 0;
}
