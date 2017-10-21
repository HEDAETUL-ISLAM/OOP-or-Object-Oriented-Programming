#include<iostream>
using namespace std;
class item{
	private:
		int id;
		double price;
		static int count;
	public:
		void getdata(){
			cin>>id>>price;
			count++;
		}	
		void putdata(){
			cout<<"id= "<<id<<" price= "<<price<<endl;
		}
		static void showcount(){
			cout<<"count= "<<count<<endl;
		}
};
int item::count=5;
int main()
{
	item t1;
	t1.getdata();
	t1.putdata();
	t1.showcount();
	item::showcount();
	return 0;
}
