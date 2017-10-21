#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class strtype{
	private:
		char *p;
		int len;
	public:
	//	strlen();
		strtype(char *ptr);
		~strtype();
		void show();
};
strtype::strtype(char *ptr){
	len=strlen(ptr);
	p=(char *)malloc(len+1);
	if(!p){
		cout<<"allocation error"<<endl;
		exit(1);
	}
	strcpy(p,ptr);
}
strtype::~strtype(){
	cout<<"freeing"<<endl;
	free(p);
}
void strtype::show(){
	cout<<p<<" length: "<<len<<endl;
}
int main()
{
	strtype s1("this is a test"),s2("i love c++");
	s1.show();
	s2.show();
	return 0;
}
