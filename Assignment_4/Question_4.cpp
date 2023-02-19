#include<iostream>
using namespace std;
class Counter
{
   int static count;
    public:
	 Counter()
	  {
	  	count++;
	  }
	int get_count()
	 {
	 	return count;
	 }
};
int Counter::count;
int main()
{
	Counter c1,c2,c3,c4,c5;
	cout<<c1.get_count();
	return 0;
}
