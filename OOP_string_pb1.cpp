#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a = "http://www.google.com";
    
    int n=a.find(":");
    string sub=a.substr(0,n);
    cout<<sub<<endl;
    
    int n2=a.find_first_of(".");
    int n3=a.find_last_of(".");
    string sub1=a.substr(n2+1,n3-n2-1);
    cout<<sub1<<endl;

    string sub2=a.substr(n3+1,' ');
	cout<<sub2<<endl;

}
