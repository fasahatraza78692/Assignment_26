#include<iostream>
using namespace std;
class Bill
{
	int unit;
	float rup;
	 public:
	 	void get()
	 	 {
	 	 	cout<<"Enter the Bill units :"<<endl;
	 	 	cin>>unit;
	     }
	    void calculateBill()
	     {
	     	if(unit<=100)   
	     	  rup=unit*1.20;
	     	 else if(unit>100&&unit<=200)
	     	          {
	     	          	unit=unit-100;
	     	          	rup=(unit*2)+(100*1.20);
					  }
					 else
					  {
					  	unit=unit-200;
					  	rup=(unit*3)+(100*2)+(100*1.20);
					  }
		 }
	void Display()
	 {
	 	cout<<"Total Bill: "<<rup<<" (INR)";
	 }
};
int main()
{
	Bill b1;
	b1.get();
	b1.calculateBill();
	b1.Display();
   return 0;
}
