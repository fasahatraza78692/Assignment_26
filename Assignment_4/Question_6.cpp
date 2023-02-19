#include<iostream>
#include<cstring>
using namespace std;
class student
{
	string name,course,address;
	int roll_no;
	 public:
	 	student(string nm,int rn,string crs,string add)
	 	 {
	 	 	name=nm;
	 	 	roll_no=rn;
	 	 	course=crs;
	 	 	address=add;
		 }
		void display()
		 {
		 	cout<<"Name    :"<<name<<endl;
		 	cout<<"Roll No :"<<roll_no<<endl;
		 	cout<<"Course  :"<<course<<endl;
		 	cout<<"Address :"<<address<<endl;
		 }
};
int main()
{
	student s1("Fasahat Raza",21118048,"B.tech","Rampur");
	s1.display();
	return 0;
}
