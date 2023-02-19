#include<iostream>
using namespace std;
class Bank
{
	int T;
	float P,R,SI,A;
	 public:
	 	void Read()
	 	 {
	 	 	cout<<"Enter Amount   :"<<endl;
	 	 	cin>>P;
	 	 	cout<<"Enter Interest :"<<endl;
	 	 	cin>>R;
	 	 	cout<<"Enter Time     :"<<endl;
	 	 	cin>>T;
		 }
		void S_interest()
		 {
		 	SI=(P*R*T)/100;
		 	A=P+SI;
		 }
		void Display()
		 {
		 	cout<<"Simple Interest = "<<SI<<endl;
		 	cout<<"Final Amount = "<<A<<endl;
		 }
		
};
int main()
{
	Bank b1;
	b1.Read();
	b1.S_interest();
	b1.Display();
	return 0;
}
