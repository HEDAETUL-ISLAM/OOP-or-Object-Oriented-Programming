#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1="Hello ";
	string s2="Good morning";
	string s3="Bad";
	s2.insert(5,s1);
		cout<<s2<<endl;
	s2.replace(5,5,"happy ");
		cout<<s2<<endl;
	s2.replace(5,1,s3);
		cout<<s2<<endl;
	s2.erase(5,7);
		cout<<s2<<endl;

return 0;
}


