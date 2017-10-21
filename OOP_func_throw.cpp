#include<iostream>
#include<stdexcept>
using namespace std;

void test() throw (int,char,runtime_error){
	//throw 20;
	//throw 'c';
	throw runtime_error("hedaetul");
}

int main()
{
	try{
		test();
	}
	catch(int i){
			cout<<"int type "<<i<<endl;
		}
	catch(char c){
			cout<<"char type "<<c<<endl;
		}	
	catch(runtime_error r){
			cout<<"run time ettor type "<<r.what()<<endl;
		}
}
