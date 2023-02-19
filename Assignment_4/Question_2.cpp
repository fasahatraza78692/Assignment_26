#include<iostream>
using namespace std;
class Time
{
  int h,m,s;
   public:
    void setTime(int a,int b,int c)
	 {
	 	h=a;
	 	m=b;
	 	s=c;
	 }
	void showTime()
	 {
	 	cout<<h<<" : "<<m<<" : "<<s<<endl;
	 }	
	void normlize()
	 {
	 	m=m+s/60;
	 	s=s%60;
	 	h=h+m/60;
	 	m=m%60;
	 }
	Time add(Time t)
	 {
	 	Time temp;
	 	temp.h=h+t.h;
	 	temp.m=m+t.m;
	 	temp.s=s+t.s;
	 	temp.normlize();
	 	return temp;
	 }
};
int main()
{
	Time t1,t2,t3;
	t1.setTime(10,58,25);
	t2.setTime(13,18,55);
	t3=t1.add(t2);
	t3.showTime();
	return 0;
}
