#include<iostream>
using namespace std;
 
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
  ~A()  { cout << "A's donstructor called" << endl; }
};
 
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }
  ~B()  { cout << "B's donstructor called" << endl; }
};
 
class C: public B, public A  // Note the order
{
public:
  C()  { cout << "C's constructor called" << endl; }
  ~C()  { cout << "C's donstructor called" << endl; }
};
 
int main()
{
    C c;
    return 0;
}
