#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("hello");
	string s2("good  morning");
	int x=s1.compare(s2);
	cout<<x<<endl;
	cout<<s2.compare(s1)<<endl;
	string s3 = "hello";
	cout<<s1.compare(s3)<<endl;
	return 0;
}

