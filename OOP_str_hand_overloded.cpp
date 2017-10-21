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
		void operator+=(int bonusMark){
			mark=mark+bonusMark;
		}
		friend void operator-=(Mark &currentObject,int redMark);
};
void operator-=(Mark &currentObject,int redMark){
	currentObject.mark-=redMark;
}
int main()
{
	Mark anil(45);
	anil.yourMarkPlease();
	int x=20;
	anil+=x;
	anil.yourMarkPlease();
	anil-=x;
	anil.yourMarkPlease();
	return 0;
}
