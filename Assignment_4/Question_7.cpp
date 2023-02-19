#include<iostream>
using namespace std;
class Box
{
  float length,breadth,height,vol;
	public:
	 Box(float l,float b,float h)
	  {
	  	length=l;
	  	breadth=b;
		height=h;
		vol=length*breadth*height;
	  }
	 void volume()
	  {
	  	cout<<"Volume = "<<vol<<endl;
	  }
};
int main()
{
	Box b1(13.3,6.0,2.3);
	b1.volume();
	return 0;
}
