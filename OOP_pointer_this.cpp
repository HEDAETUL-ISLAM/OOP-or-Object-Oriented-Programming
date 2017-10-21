#include<iostream>
#include<string.h>
using namespace std;

class inventory{
			char item[20];
			double cost;
			int onhand;
	public:
		inventory (char *i,double c,int o){
			strcpy(this->item,i);
			this->cost=c;
			this->onhand=o;
		}
		void show();
};
void inventory::show(){
	cout<<"item name: "<<this->item<<endl;
	cout<<"cost is: "<<this->cost<<endl;
	cout<<"on hand: "<<this->onhand<<endl;
}
int main()
{
	inventory ob("burger",5,4);
	ob.show();
	return 0;
}
