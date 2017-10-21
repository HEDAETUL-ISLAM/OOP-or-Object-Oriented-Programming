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
		Mark operator++(int){
			Mark duplicate(*this);
			mark=mark+1;
			return duplicate;
		}
		friend Mark operator--(Mark&,int);
};
Mark operator--(Mark &m,int){
			Mark duplicate(m);
			m.mark-=1;
			return duplicate;
}

int main()
{
	Mark anil(67);
	anil.yourMarkPlease();
	(anil++).yourMarkPlease();
	anil.yourMarkPlease();
	(anil--).yourMarkPlease();
	anil.yourMarkPlease();
}
