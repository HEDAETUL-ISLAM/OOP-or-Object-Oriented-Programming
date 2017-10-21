#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	try{
		try{
			throw "a char exception";
		}catch(const char *c){
			cout<<"char type in inner block--> "<<c<<endl;
			cout<<"rethrow it"<<endl;
		//	throw runtime_error("hedaetul");
		//	throw;
			
		}
	}
	catch(const char *c){
		cout<<"char type outer block--> "<<c<<endl;
	}
	catch(...){
		cout<<"unexpected exception--> "<<endl;
	}
}
