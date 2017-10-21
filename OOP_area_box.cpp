#include<iostream>
using namespace std;

class box{
	int i;
	int w;
	public:
		box(){
			cout<<"in default construc"<<endl;
			i=0;
			w=0;
		}
		box(int x,int y){
			cout<<"in parameter"<<endl;
			i=x;
			w=y;
		}
		~box(){
			cout<<"in destruct"<<endl;
			cout<<i<<","<<w<<endl;
		}
		void show(){
			cout<<"length is: "<<i<<endl;
			cout<<"weight is: "<<w<<endl;
			cout<<"area: "<<i*w<<endl;
		}
};
int main()
{
	box ob,ob1(10,20);
	ob.show();
	ob1.show();
	return 0;
}
