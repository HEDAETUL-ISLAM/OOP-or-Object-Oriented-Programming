#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2("ABC");
	string s3=s2;
		cout<<s3<<endl;
	string s4="Hello";
	string s5,s6;
     // reading a word
	cin>>s5; 
    // reading  a line
	getline(cin,s6); 
	s2+=s3;
		cout<<s2<<endl;
	s3+="Bye";
    	cout<<s3<<endl;
    	cout<<s4<<endl;
    string s7(s4);
    s2=s4+"Bad";
    	cout<<s2<<endl;
    string s8;
    s8=("Good Morning");              
	s2.assign(s8,2,6);
    cout<<s2<<endl;
            
    s2.assign(s8,1,5);
    	cout<<s2<<endl;
       return 0;
}

