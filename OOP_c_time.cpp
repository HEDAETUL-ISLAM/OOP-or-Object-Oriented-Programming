#include<iostream>
#include<ctime>
using namespace std;

class timer{
	private:
		clock_t start;
	public:
		timer();
		~timer();	
};
timer::timer(){
	cout<<"constructor called"<<endl;
	start=clock();
}
timer::~timer(){
	cout<<"destructor called"<<endl;
	clock_t end;
	end=clock();
	cout<<"elapsed time: "<<CLOCKS_PER_SEC<<endl;
}
int main()
{
	timer ob;
	char c;
	cout<<"press a key folowed by enter: ";
	cin>>c;
	return 0;
}
