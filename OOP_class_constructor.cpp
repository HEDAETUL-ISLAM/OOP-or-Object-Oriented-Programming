#include<iostream>
#include<string>
using namespace std;

class Human{
	private:
		string name;
		int age;
	public:
		Human(){
			name="no name";
			age=0;
			cout<<"constructor is called when u use Human object"<<endl;
		}
		void dispaly(){
			cout<<name<<endl<<age<<endl;
		}
};
int main()
{
	Human anil;
	anil.dispaly();
	return 0;
}
