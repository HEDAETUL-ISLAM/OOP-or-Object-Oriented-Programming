#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,n1;
	string str;
	cout<<"enter a email address"<<endl;
	getline(cin,str);
	
	n= str.find("@");
	string sub=str.substr(0,n);
	cout<<"Local-part : "<<sub<<endl;
	
	n1=str.find(".");
	string sub1=str.substr(n+1,n1-(n+1));
	cout<<"Domain : "<<sub1<<endl;
	
	string sub2=str.substr(n1+1,' ');
	cout<<"TLD or Top Level Domain: "<<sub2<<endl; 
}
