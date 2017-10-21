#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
	void setName(string iname){
		name=iname;
	}
	void setAge(int iage){
		age=iage;
	}	
};
class Student : public Person{
	public:
		int id;
		void setId(int iid){
			id=iid;
		}
		void introduce(){
			cout<<" hi i am "<<name<<endl<<" and i am "<<age<<" years old"<<endl<<" and my id is "<<id<<endl;
		}
};
int main()
{
	Student anil;
	anil.setName("anil");
	anil.setAge(25);
	anil.setId(12345);
	anil.introduce();
	return 0;
}

