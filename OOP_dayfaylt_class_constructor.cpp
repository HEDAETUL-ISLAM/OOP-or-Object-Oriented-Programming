#include<iostream>
#include<string>
using namespace std;

class Human{
	private:
		int age;
		string name;
	public:
		/*Human(){
			cout<<"default constructor"<<endl;
			name="anil";
			age=20;
		}*/
		Human(string iname="laju",int iage=20){
			cout<<"overloaded constructor"<<endl;
			name=iname;
			age=iage;
		}
		void speakUp(){
			cout<<name<<endl<<age<<endl;
		}	
};
int main()
{
	Human anil;//("anil",24);
	anil.speakUp();
	return 0;	
}
