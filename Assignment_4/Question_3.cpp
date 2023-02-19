#include<iostream>
using namespace std;
class Cube
{
	double side,vol;
	 public:
	 	Cube(int s)
	 	 {
	 	 	vol=s*s*s;
		 }
		void Display()
		 {
		 	cout<<"Volume = "<<vol<<endl;
		 }
};
int main()
{
	Cube c1(4);
	c1.Display();
	return 0;
}
