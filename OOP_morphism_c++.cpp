#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		virtual void introduce(){
			cout<<"hey from person"<<endl;
		}
};
class Student : public Person{
	public:
	void introduce(){
			cout<<"hey from student"<<endl;
		}
};
class Farmer : public Person{
	public:
		void introduce(){
			cout<<"hey from farmer"<<endl;
		}
};
void whoThis(Person &P){
	P.introduce();
}
int main()
{
	Farmer anil;
	Student alex;
	anil.introduce();
	alex.introduce();
	whoThis(anil);
	whoThis(alex);
	return 0;
}

