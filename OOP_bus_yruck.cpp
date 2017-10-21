 #include<iostream>
using namespace std;
class Bus;
class Truck;
void comp(Bus,Truck);

class Bus{
	private:
		int BusWeight;
	public:
		Bus(int b){
			BusWeight=b;
		}
		void showb(){
			cout<<"bus weight is: "<<BusWeight<<endl;
		}
		friend void comp(Bus,Truck);
};
class Truck{
	private:
		int TruckWeight;
	public:
		Truck(int t){
			TruckWeight=t;
		}
		void showt(){
			cout<<"truck weight is: "<<TruckWeight<<endl;
		}
		friend void comp(Bus,Truck);	
};
void comp(Bus bb,Truck tt){
	if(bb.BusWeight>tt.TruckWeight){
		cout<<"bus";
	}
	else{
		cout<<"truck";
	}
}

int main()
{
	Bus volvo(500);
	volvo.showb();
	Truck tata(1000);
	tata.showt();
	comp(volvo,tata);
}

