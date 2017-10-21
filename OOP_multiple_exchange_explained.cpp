#include<iostream>
#include<string>
using namespace std;

class Father{
	public:
		int height;
		void askFather(){
			cout<<"i am ur father what u wanna want"<<endl;
		}
};
class Mother{
	public:
		string skincolor;
		void askMother(){
			cout<<"i am ur mother what u wanna want"<<endl;
		}	
};
class Child : public Father,public Mother{
	public:
		void setColorandHeight(string icolor,int iheight){
			skincolor=icolor;
			height=iheight;
		}
		void display(){
			cout<<"height is "<<height<<" color is "<<skincolor<<endl;
		}
};
int main()
{
	Child anil;
	anil.setColorandHeight("whilte",6);
	anil.askFather();
	anil.askMother();
	anil.display();return 0;
}
