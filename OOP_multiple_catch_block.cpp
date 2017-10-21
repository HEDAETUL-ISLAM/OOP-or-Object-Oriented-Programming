#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	try{
		throw 20;
		//throw "some expression";
		throw runtime_error("runtime error");
	}
	
	catch(int error){
		cout<<error<<endl;
	}
	/*catch(runtime_error e){
		cout<<e.what()<<endl;
	}*/
	catch(...){
		cout<<"some exception occoured"<<endl;
	}
	return 0;
}
