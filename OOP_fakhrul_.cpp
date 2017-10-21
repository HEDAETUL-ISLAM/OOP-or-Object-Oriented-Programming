#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str("My Hobby Is Programming");
	cout<<"First word = "<<str.substr(0,2)<<endl;
	cout<<"Second word = "<<str.substr(3,6)<<endl;
	cout<<"Third wird = "<<str.substr(9,2)<<endl;
	cout<<"Fourth word ="<<str.substr(11,13)<<endl;
}
