#include<iostream>
using namespace std;

int main()
{
	int y;
	float m;
	char l;
	int *q;
	
	y=105;
	cout<<y<<endl;
	
	m=4.5;
	cout<<m<<endl;
	
	cout<<"enter a character type value: ";
	cin>>l;
	cout<<l<<endl;
	
	q=&y;
	cout<<q<<endl;
	
	return 0;
} 
