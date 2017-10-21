#include<iostream>
using namespace std;

class Mark{
	private:
		int subject[3];
	public:
		Mark (int sub1,int sub2,int sub3){
			subject[0]=sub1;
			subject[1]=sub2;
			subject[2]=sub3;
		}	
		int operator[](int position){
			return subject[position];
		}
};
int main()
{
	Mark anil(22,33,44);
	cout<<anil[0]<<endl;
	cout<<anil[1]<<endl;
	cout<<anil[2]<<endl;
	return 0;
}
