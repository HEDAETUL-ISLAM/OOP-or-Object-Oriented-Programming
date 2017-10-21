#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("hello world");
	//erase all chars from index 7
   s1.erase(7);
   cout<<s1;
   return 0;
}
