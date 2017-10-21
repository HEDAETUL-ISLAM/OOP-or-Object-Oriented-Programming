#include<iostream>
using namespace std;
class Mammal
 {
 public:
	Mammal() 
		{ cout << "Mammal constructor...\n"; }
	~Mammal() 
		{ cout << "Mammal destructor...\n"; }
	virtual void Move() 
		const { cout << "Mammal move one step\n"; }
	virtual void Speak() 
		const { cout << "Mammal speak!\n"; }
 };

 class Dog : public Mammal
{
public:
	Dog() 
		{ cout << "Dog Constructor...\n"; }
	~Dog() 
		{ cout << "Dog destructor...\n"; }
	void WagTail() 
		{ cout << "Wagging Tail...\n"; }
	void Speak()const 
		{ cout << "Woof!\n"; }
	void Move()const 
		{ cout << "Dog moves 5 steps...\n"; }
};

int main()
{
	Dog d;
	Mammal *pDog =&d;
	pDog->Speak();
	pDog->Move();
	return 0;
}

