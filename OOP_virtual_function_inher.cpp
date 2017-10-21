#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		 virtual void introduce(){
			cout<<"hi from person"<<endl;
		}
};
class Student : public Person{
	public:
		void introduce(){
			cout<<"hi from student"<<endl;
		}
};
class Gstudent : public Student{
	public:
		void introduce(){
			cout<<"hi from gstudent"<<endl;
		}
};
void whoisthis(Person &P){
	P.introduce();
}
int main()
{
	Person anil;
	Student anji;
	Gstudent aki;
	
	whoisthis(anil);
	whoisthis(anji);
	whoisthis(aki);
	return 0;
}
