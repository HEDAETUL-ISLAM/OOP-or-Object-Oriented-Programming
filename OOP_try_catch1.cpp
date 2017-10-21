#include<iostream>
using namespace std;
int main()
/*
{
	int m;
	cin>>m;
	try	{
		if(m==0) throw m;
		cout<<200/m<<endl;
	}
	catch(int x)
	{
		cout<<"exception int occured for:"<<x<<endl;
	}
	catch(double d)
	{
		cout<<"exception for double"<<d<<endl;
      }
	cout<<"end\n";
	return 0;
}*//*
{
	int m;
	cin>>m;
	try	{
		if(m==0) throw m;
		else throw a;
	}
	catch(int x)
	{
		cout<<"exception int occured for:"<<x<<endl;
	}
	catch(…)
	{
		cout<<"exception for all”<<endl;
      }
	cout<<"end\n";
	return 0;
}*//*

{
	string str("one two three");
	str.resize(20);
	cout<<str.size()<<endl;
	cout<<str.length()<<endl;
	cout<<str.capacity()<<endl;
	cout<<str.max_size()<<endl;
	cout<<boolalpha<<str.empty()<<endl;
    return 0;
}
*/
{
	string str("one two three");
	string::size_type r;
	string::size_type n;
	n=str.find("two");
	cout<<n<<endl;
	cout<<str.find_first_of("teo")<<endl;
	cout<<str.find_first_not_of("teo")<<endl;
	r=str.find("Tow");
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




