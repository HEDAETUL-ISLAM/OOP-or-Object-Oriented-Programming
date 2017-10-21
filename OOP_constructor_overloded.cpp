#include<iostream>
#include<string>
using namespace std;

class Human{
	private:
		int age;
		string name;
	public:
		Human(){
			cout<<"default constructor"<<endl;
			age=20;
			name="anil";
		}
		Human(string iname){
			cout<<"constructor with name"<<endl;
			age=20;
			name=iname;
		}
		Human(int iage){
			cout<<"constructor with age"<<endl;
			age=iage;
			name="anil";
		}
		Human(string iname,int iage){
			cout<<"constructor with name and age"<<endl;
			age=iage;
			name=iname;
		}
		void display(){
			cout<<age<<endl<<name<<endl<<endl;
		}
};
int main()
{
	Human anil;
	anil.display();
	
	Human apu("apu");
	apu.display();
	
	Human akil(25);
	akil.display();
	
	Human ajay("ajay",25);
	ajay.display();
	return 0;
}
