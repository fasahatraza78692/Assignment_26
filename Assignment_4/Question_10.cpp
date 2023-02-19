#include<iostream>
using namespace std;
class StaticCount
{
	int static count;
	 public:
		void ncount()
		 {
		 	count++;
		 }
		void Display()
		 {
		 	cout<<"Number of count = "<<count<<endl;
		 }
};
int StaticCount::count;
int main()
{
	StaticCount c1;
	c1.ncount();
	c1.ncount();
	c1.ncount();
	c1.Display();
	return 0;
}
