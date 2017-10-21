#include<iostream>
#include<string>
using namespace std;

class Father{
	protected:
		int height;
	public:
		Father(int h){
			cout<<"constructor of father is called"<<endl;
			height=h;
		}	
};
class Mother{
	protected:
		string skincolor;
	public:
		Mother(string color){
			cout<<"constructor of mother is called"<<endl;
			skincolor=color;
		}	
};
class Child : public Father,public Mother{
	public:
		Child(int h,string color) : Father(h),Mother(color){
			height=h;
			skincolor=color;
			
			cout<<"child class constructor"<<endl;
		}
		void display(){
			cout<<"height is "<<height<<" and color is "<<skincolor<<endl;
		}
};
int main()
{
	Child anil(25,"white");
	anil.display();
	return 0;
}
