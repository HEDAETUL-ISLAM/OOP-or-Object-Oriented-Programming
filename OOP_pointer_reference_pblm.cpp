#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype{
	char *p;
	public:
		strtype(char *s);
		~strtype(){
			delete []p;
		}
		char *get(){
			return p;
		}
};
strtype :: strtype(char *s){
	int l;
	l=strlen(s)+l;
	p=new char[1];
	if(!p){
		cout<<"allocation error"<<endl;
		exit(1);
	}
	strcpy(p,s);
}
void show(strtype &x){
	char *s;
	s=x.get();
	cout<<s<<endl;
}
int main()
{
	strtype a("p"),b("q");
	show(a);
	show(b);
	return 0;
}
