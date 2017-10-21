#include<iostream>
#include<string>
using namespace std;

class Human{
	private:
		string *name;
		int *age;
	public:
		Human(string iname,int iage){
			name = new string;
			age = new int;
			*name =iname;
			*age =iage;
		}
		void display(){
			cout<<"hi i am "<<*name<<"i am "<<*age<<"years old"<<endl;	
		}
		~Human(){
			delete name;
			delete age;
			cout<<"memory was distructed"<<endl;
		}
};
int main()
{
	Human *anil=new Human("anil",25);
	anil->display();
	delete anil;
	return 0;
}

