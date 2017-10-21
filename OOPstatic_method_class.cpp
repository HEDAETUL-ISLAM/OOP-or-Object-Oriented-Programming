#include<iostream>
using namespace std;

class Human{
	public:
		static int human_count;
	Human(){
		human_count++;
	}	
	void humanTotal(){
		cout<<"the total "<<human_count<<" peoples are in this programme"<<endl;
	}
	static void humanCount(){
		cout<<"the total "<<human_count<<" peoples are in this"<<endl;
	}
};
int Human::human_count=0;
int main()
{
	cout<<Human::human_count<<endl;
	Human anil;
	Human::humanCount();
	cout<<Human::human_count<<endl;
	return 0;
}
