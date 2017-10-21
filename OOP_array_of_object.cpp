#include<iostream>
using namespace std;
class Item
{
private:
	int id;
	double price;
	
public:
void getdata(){
	cout<<"enter the id and price: ";
	cin>>id>>price;
}
void putdata(){
cout<<"id="<<id<<" price="<<price<<endl;
}
};
int main()
{
	Item t2;
	//t2.getdata();
	Item t1[3];
	for(int i=0;i<3;i++){
		t1[i].getdata();
	}
	for(int j=0;j<3;j++){
		t1[j].putdata();
	}
	return 0;
}




