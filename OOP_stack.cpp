#include<iostream>
using namespace std;
#define SIZE 10

class stack{
	pr9vate:
		char stck[SIZE];
		int tos;
	
	public:
		void int();
		void push(char ch);
		char pop;
};
void stack::int()
{
	tos=0;
}
void stack::push(char ch)
{
	if(tos==SIZE){
		cout<<"Stack is full.";
		return ;
	}
	
}
