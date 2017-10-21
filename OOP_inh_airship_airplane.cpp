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
		void setp(int p) {	
			passenger = p; 
		}
		int getp(){
			return passenger ;
		}

		void setc(double c) {
			cargo = c; 
		}
		int getc(){
			return cargo ;
		}
		
		void show(){
			cout<<"passenger number is : "<<getp()<<endl;
			cout<<"cargo number is : "<<getc()<<endl;
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
			cout<<"engine name is : "<<engine<<endl;
			cout<<"rane is : "<<range<<endl;
		}
		
		
};
int main()
{
	AirPlane ob("lucky",5.5,200,50.5);
	ob.showp();
}
