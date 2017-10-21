#include <iostream>
using namespace std;

class base {
private:	
  int x;
public:
  void setx(int n) { x = n; }
  void showx() { cout << x << '\n'; }
};

// Inherit as public.
class derived : public base {
private:
  int y;
public:
  void sety(int n) { y = n; }
  void showy() { cout << y << '\n'; }
};
int main()
{
  derived ob;

  ob.setx(10); 
  ob.sety(20); 

  ob.showx(); 
  ob.showy(); 

  return 0;
}

