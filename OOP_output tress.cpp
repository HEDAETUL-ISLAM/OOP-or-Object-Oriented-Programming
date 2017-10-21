#include<iostream>
using namespace std;
int main()
{
	string str("one two three");
	string::size_type r;
	string::size_type n;
	n=str.find("two");
	cout<<n<<endl;
	cout<<str.find_first_of("teo")<<endl;
	cout<<str.find_first_not_of("no")<<endl;
	r=str.find("Two");
	cout<<r<<endl;
	cout<<str.find_first_of("xyz")<<endl;
	cout<<str.find_first_not_of("xy")<<endl;
	cout<<str.find_last_of("xyz")<<endl;
	cout<<str.find_last_not_of("xy")<<endl;
	cout<<str.find_last_of("txn")<<endl;
	cout<<str.find_last_not_of("tn")<<endl;
	cout<<str.substr(4,6)<<endl;
	return 0;

}

