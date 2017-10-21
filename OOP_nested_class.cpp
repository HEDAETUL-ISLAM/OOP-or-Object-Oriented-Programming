#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		
		class Address{
			public:
				string country;
				string zila;
				string vill;
		};
		Address addr;
		void AddressPerson(){
			cout<<name<<endl<<addr.country<<endl<<addr.zila<<endl<<addr.vill<<endl;
		}
};
int main()
{
	Person :: Address();
	Person anil;
	anil.name="anil";
	anil.addr.country="bd";
	anil.addr.zila="kurigram";
	anil.addr.vill="cp";
	anil.AddressPerson();
	return 0;
}
