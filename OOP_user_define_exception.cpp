#include<iostream>
#include<exception>
using namespace std;

class overSpeed:public exception{
	int speed;
	public:
		const char* what(){
			return "check uot ur car speed\nu r in the car not in plane";
		}
		void getSpeed(){
			cout<<"your car speed is "<<speed<<endl;
		}
		void setSpeed(int speed){
			this->speed=speed;
		}
};

class Car{
	private:
		int speed;
	public:
		Car(){
			speed=0;
			cout<<"speed is "<<speed<<endl;
		}
		void accelerate(){
			for(;;){
				speed+=10;
				cout<<"speed is "<<speed<<endl;
				if(speed>=250){
					overSpeed s;
					s.setSpeed(speed);
					throw s;
				}
			}
		}
};
int main()
{
	Car anilcar;
	try{
		anilcar.accelerate();
	}
	catch(overSpeed s){
		cout<<s.what()<<endl;
		s.getSpeed();
		return 0;
	}
}
