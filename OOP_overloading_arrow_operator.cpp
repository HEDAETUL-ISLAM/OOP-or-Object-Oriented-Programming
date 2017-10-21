#include<iostream>
using namespace std;

class Mark{
	private:
		int mark;
	public:
		Mark(int m){
			mark=m;
		}	
	void whatsYourMark(){
		cout<<"hey i got "<<mark<<" marks"<<endl;
	}
	Mark *operator->(){
		return this;
	}	
};
int main()
{
	Mark anilmark(65);
	anilmark.whatsYourMark();
	anilmark->whatsYourMark();
	return 0;
}
