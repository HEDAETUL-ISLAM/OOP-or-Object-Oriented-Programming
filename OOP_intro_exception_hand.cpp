#include<iostream>
#include<exception>
using namespace std;

int main()
{
	int a=10,b=0;
	int c;
	try{
		if(b==0){
			throw "divided by zero";
		}
	c=a/b;
	cout<<c<<endl;	
	}
	catch(const char *c){
		cout<<"exception occourd"<<endl<<c;
	}
	return 0;
}
