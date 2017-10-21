#include<iostream>
#include<string>
using namespace std;

class Person{
	protected:
		string name;
	public:
		void setName(string iname){
			name=iname;
		}
};
class Student : private Person{
	public:
	//	Person :: name;
		Person :: setName;
		void display(){
			cout<<name<<endl;
		}
		void studentSetName(string iname){
			setName(iname);
		}
};

int main()
{
	Student anil;
	anil.setName("anil");
//	anil.name="anil";
	anil.display();
	return 0;
} 
