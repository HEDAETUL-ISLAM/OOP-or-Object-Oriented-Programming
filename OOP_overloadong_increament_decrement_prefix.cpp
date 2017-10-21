#include<iostream>
using namespace std;

class Mark{
	private:
		int mark;
	public:
		Mark(){
			mark=0;
		}	
		Mark(int m){
			mark=m;
		}
		void yourMarkPlease(){
			cout<<"your mark is: "<<mark<<endl;
		}
		Mark operator++(){
			mark=mark+1;
			return *this;
		}
		friend Mark operator--(Mark&);
};
Mark operator--(Mark &m){
	m.mark-=1;
	return m;
}
int main()
{
	Mark anil(68);
	anil.yourMarkPlease();
	(++anil).yourMarkPlease();
	anil.yourMarkPlease();
	(--anil).yourMarkPlease();
	anil.yourMarkPlease();
	return 0;
}
