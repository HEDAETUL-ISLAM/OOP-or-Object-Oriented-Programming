#include<iostream>
using namespace std;

class Triangle{
	private:
		int b;
		int h;
	public:
		float A;
		void show(){
			cout<<"height is: "<<h<<endl;
			cout<<"base is: "<<b<<endl;
			cout<<"area is: "<<A<<endl;
		}	
		void seth(int x){
			b=x;
		}
		void setb(int y){
			h=y;
		}
		float areaA(){
			A=(h*b)/2;
			return A;
		}
};
int main()
{
	Triangle T;
	T.seth(20);
	T.setb(20);
	T.areaA();
	T.show();
	return 0;
}
