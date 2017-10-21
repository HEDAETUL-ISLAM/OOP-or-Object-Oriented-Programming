#include<iostream>
using namespace std;

class Human{
	public:
		static int human_count;
	Human(){
		human_count++;
	}
	void humanTotal(){
		cout<<"there are "<<human_count<<" peoples"<<endl;
	}
};
int Human::human_count=0;
int main()
{
	cout<<Human::human_count<<endl;
	Human anil;
	Human anjali;
	Human akil;
	Human avi;
	anil.humanTotal();
	anjali.humanTotal();
	akil.humanTotal();
	avi.humanTotal();
	cout<<Human::human_count<<endl;
	return 0;
}
