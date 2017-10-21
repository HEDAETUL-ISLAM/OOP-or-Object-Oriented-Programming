#include<iostream>
using namespace std;

class AirShip{
	private:
		int passenger;
		double cargo;
	public:
		AirShip(int p,double c){
			passenger=p;
			cargo=c;
		}
		void show(){
			cout<<"passenger: "<<passenger<<endl;
			cout<<"cargo capasity: "<<cargo<<" kg"<<endl;
		}
};
class AirPlane : protected AirShip{
	private:
		string engine;
		double range;
	public:
		AirPlane(string e,double r,int p,double c) : AirShip(p,c){
			engine=e;
			range=r;
		}
		void showp(){
			show();
			cout<<"engine: "<<engine<<endl;
			cout<<"range: "<<range<<" km"<<endl;
		}
};
int main()
{
	AirPlane ob("propeller",12000,100,40000);
	ob.showp();
return 0;
}
