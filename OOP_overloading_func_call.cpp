#include<iostream>
using namespace std;

class Mark{
	private:
		int mark;
	public:
		Mark(int m){
			cout<<"constructor called"<<endl;
			mark=m;
		}
	void whatsYourMark(){
		cout<<"hey i got "<<mark<<" marks"<<endl;
	}		
	Mark operator ()(int mk){
		cout<<"operator function called"<<endl;
		mark = mk;
		return *this;
	}
};
int main()
{
	Mark anilmark(85);
	anilmark.whatsYourMark();
	anilmark(44);
	anilmark.whatsYourMark();
	return 0;
}
