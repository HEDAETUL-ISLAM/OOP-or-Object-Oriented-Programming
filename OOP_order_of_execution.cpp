#include<iostream>
using namespace std;

class Person{
	public:
		Person(){
			cout<<"constructor of the person class was called"<<endl;
		}
		~Person(){
			cout<<"distructor of the person class was called"<<endl;
		}
};
class Student : public Person{
	public:
		Student(){
		cout<<"constructor of student class was called"<<endl;
		}
		~Student(){
		cout<<"distructor of the student class was called"<<endl;
		}
};
int main()
{
	Student anil;
	return 0;
}
