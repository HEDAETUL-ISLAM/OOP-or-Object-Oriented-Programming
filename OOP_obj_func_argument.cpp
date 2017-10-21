#include<iostream>
using namespace std;

class time{
	private:
		int hr;
		int min;
	public:
		void setdata(int h=0,int m=0){
			hr=h;
			min=m;
		}
		void putdata(){
			cout<<hr<<min<<endl;
		}
		void sumtime(time ta,time tb){
			min=(ta.min+tb.min)%60;
			hr=ta.hr+tb.hr+(ta.min+tb.min)/60;
		}
};
int main()
{
	time t1;
	t1.setdata(3,10);
	time t2;
	t2.setdata(4,10);
	time t3;
	t3.sumtime(t1,t2);
	t1.putdata();
	t2.putdata();
	t3.putdata();
	return 0;
}
