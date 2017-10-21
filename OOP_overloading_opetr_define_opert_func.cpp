#include<iostream>
using namespace std;

class Mark{
	private:
		int intmark;
		int extmark;
	public:
		Mark(){
			intmark=0;
			intmark=0;
		}	
		Mark(int im,int em){
			intmark=im;
			extmark=em;
		}
	void display(){
		cout<<intmark<<endl<<extmark<<endl;
	}
	Mark operator+(Mark m){
		Mark temp;
		temp.intmark=intmark+m.intmark;
		temp.extmark=extmark+m.extmark;
		return temp;
	}
	Mark operator-(Mark m);
};
Mark Mark :: operator-(Mark m){
	Mark temp;
		temp.intmark=intmark-m.intmark;
		temp.extmark=extmark-m.extmark;
		return temp;
}
int main()
{
	Mark m1(10,20),m2(20,30);
	Mark m3=m1+m2;
	Mark m4=m1-m2;
	m3.display();
	m4.display();
	return 0;
}
