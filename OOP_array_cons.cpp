#include<iostream>
using namespace std;

class samp{
	private:
		int a,b;
	
	public:
		samp(int n,int m){
			a=n;
			b=m;
		}
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}
};
int main()
{
	samp ob[4][2]={samp(1,2),samp(3,4),samp(5,6),samp(7,8),samp(9,10),samp(11,12),samp(13,14),samp(15,16),};
	int i;
	for(i=0;i<4;i++){
		cout<<ob[i][0].geta()<<' ';
		cout<<ob[i][0].getb()<<endl;
		cout<<ob[i][1].geta()<<' ';
		cout<<ob[i][1].getb()<<endl;
	}
	
}
