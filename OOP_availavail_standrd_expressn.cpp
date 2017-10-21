#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    int a=10,b=0,c;
	try{
		/*if(b==0){
			throw runtime_error("divide by zero error");
		}*/
		if(b==0){
			throw "divided by zero";
		}
	c=a/b;
	cout<<c<<endl;	
	}	
/*	catch(runtime_error &error){
		cout<<"exception occured"<<endl;
		cout<<error.what();
	}*/
	catch(const char *c){
		cout<<"exception occourd"<<endl<<c;
	}
	return 0;
}
