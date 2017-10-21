#include<iostream>
using namespace std;

class Bank{
	private:
		int accountID;
		int accountBalance;
	public:
		int depmoney;
		Bank(){
			accountID=0;
			accountBalance=0;
		}	
		Bank(int a,int b){
			accountID=a;
			accountBalance=b;
		}
		int deposite(int ammount){
			depmoney=accountBalance+ammount;
			return depmoney;
		}
		void showInformation(){
			cout<<"account id is : "<<accountID<<endl;
			cout<<"account balance is : "<<accountBalance<<endl;
			cout<<"deposite money is : "<<depmoney<<endl;
		}
};
int main()
{
	Bank ob(100,200);
	ob.deposite(500);
	ob.showInformation();
}
