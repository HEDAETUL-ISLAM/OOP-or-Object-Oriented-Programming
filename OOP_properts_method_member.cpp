#include<iostream>
using namespace std;

class HumanBeing{
	public:
		string name;
		
		void introduce(){
			cout<<"hi i am "<<name<<endl;
		}
};
int main()
{
	HumanBeing anil;
	anil.name="anil";
	anil.introduce();
	HumanBeing anjali;
	anjali.name="anjali";
	anjali.introduce();
	return 0;
}
