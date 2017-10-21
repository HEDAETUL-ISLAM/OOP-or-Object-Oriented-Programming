#include<iostream>
using namespace std;

class base{
	protected:
		int a,b;
	public:
		void setab(int m,int n){
			a=m;
			b=n;
		}
};
class derived:protected base{
	private:
		int c;
	public:
		void setc(int k){
			c=k;
		}
	void showabc(){
		cout<<a<<","<<b<<","<<c<<endl;
	}
	void setvalue(int m,int n){
		setab(m,n);
	}
};
int main()
{
	derived ob;
	ob.setvalue(10,20);
	ob.setc(30);
	ob.showabc();
	return 0;
}
