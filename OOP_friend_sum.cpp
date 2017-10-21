/*Create an application which will have 1 class called decimalNumbers. 
Data Members:
i. two integer which represent the numbers to be added
Member Functions:
ii. setValue() which sets values of the two private integers.
Write a function called void add(decimaNumbers) which will add the two integer numbers.
The function must be friendly. Test the program using main function.*/
#include<iostream>
using namespace std;

class decimalNumber{
	private:
		int x,y;
	public:
		void setValue(int a,int b){
			x=a;
			y=b;
		}
	friend void add(decimalNumber ob);	
};
void add(decimalNumber ob){
	int sum;
	sum=ob.x+ob.y;
	cout<<sum;
}
int main()
{
	decimalNumber ob1;
	ob1.setValue(10,20);
	add(ob1);
}
