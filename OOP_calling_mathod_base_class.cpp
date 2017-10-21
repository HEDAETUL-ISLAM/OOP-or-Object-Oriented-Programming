#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		void introduce(){
			cout<<"hey from person."<<endl;
		}
};
class Student : public Person{
	public:
		void introduce(){
			cout<<"hey from student."<<endl;
		}
};
void whoThis(Person *P){
	P->introduce();
}
int main()
{
	Student anil;
	anil.introduce();
	whoThis(&anil);
	return 0;
}
