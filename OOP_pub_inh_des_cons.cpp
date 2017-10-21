/*#include<iostream>
using namespace std;

class base{
	private :
		int a;
	public:
		base(int n){
			cout<<"constructing base class."<<endl;
			a=n;
		}
		~base(){
			cout<<"destructor in base calass."<<endl;
		}
		void showa(){
			cout<<a<<endl;
		}
};
class derived : public base{
	private:
		int b;
	public:
		derived(int n):base(n){
			cout<<"constructor derived class."<<endl;
		}
		~derived(){
			cout<<"destructor in derived class."<<endl;
		}
		void showb(){
			cout<<b<<endl;
		}
};
int main()
{
	derived ob(10);
	ob.showa();
	ob.showb();
}*/
/*
#include <iostream>
using namespace std;

class base {
  int i;
public:
  base(int n) { 
    cout << "Constructing base class\n"; 
    i = n;
  }
  ~base() { 
     cout << "Destructing base class\n"; 
  }
  void showi() { cout << i << '\n'; }
};
class derived : public base {
  int j;
public:
  derived(int n) : base(n) { 
    cout << "Constructing derived class\n"; 
    j = n;
  } 
  ~derived() 
     { cout << "Destructing derived class\n"; }
  void showj() { cout << j << '\n'; }
};

int main()  {
  derived o(10);
  o.showi();
  o.showj();
  return 0;
}*/
/*
#include <iostream>
using namespace std;

class base {
  int i;
public:
  base(int n) { 
    cout << "Constructing base class\n"; 
    i = n;
  }
  ~base() 
{ cout << "Destructing base class\n"; }
  void showi() { cout << i << '\n'; }
};
class derived : public base {
  int j;
public:
  derived(int n, int m) : base(m) { 
    cout << "Constructing derived class\n"; 
    j = n;
  } 
  ~derived() 
{ cout << "Destructing derived class\n"; }
  void showj() { cout << j << '\n'; }
};

int main()  {
  derived o(10, 20);

  o.showi();
  o.showj();
  
  return 0;
}
*/
/*
#include <iostream>
using namespace std;

class B1 {
  int a;
public:
  B1(int x) 
  { a = x; }
  int geta() 
  { return a; }
};


class D1 : public B1 {
  int b;
public:
  D1(int x, int y) : B1(y) // pass y to B1
  {
    b = x;
  }
  int getb() { return b; }
};


class D2 : public D1 { 
  int c;
public:
  D2(int x, int y, int z) : D1(y, z)  {
    c = x;
  }

  void show() {
    cout << geta() << ' ' << getb() << ' ';
    cout << c << '\n';
  }
};

int main()  {
  D2 ob(1, 2, 3);

  ob.show();
  // geta() and getb() are still public here
  cout << ob.geta() << ' ' << ob.getb() << '\n';

  return 0;
}
*/
/*
#include <iostream>
using namespace std;

class B1 {
  int a;
public:
  B1(int x) { a = x; }
  int geta() { return a; }
};


class B2 {
  int b;
public:
  B2(int x)   {    b = x;  }
  int getb() { return b; }
};


class D : public B1, public B2 { 
  int c;
public:
  D(int x, int y, int z) : B1(z), B2(y)
  {
    c = x;
  }

  void show() {
    cout << geta() << ' ' << getb() << ' ';
    cout << c << '\n';
  }
};


int main()  {
  D ob(1, 2, 3);

  ob.show();

  return 0;
}*/
/*
#include <iostream>
using namespace std;

class B1 {
public:
  B1() { cout << "Constructing B1\n"; }
  ~B1() { cout << "Destructing B1\n"; }
};

class B2 {
  int b;
public:
  B2() { cout << "Constructing B2\n"; }
  ~B2() { cout << "Destructing B2\n"; }
};

class D : public B1, public B2 { 
public:
  D() { cout << "Constructing D\n"; }
  ~D() { cout << "Destructing D\n"; }
};
int main()
{
  D ob;

  return 0;
}*/



#include <iostream>
using namespace std;

class base {
public:
  int i;
};

// Inherit base as virtual.
class derived1 : virtual public base {
public:
  int j;
};

// Inherit base as virtual, here too.
class derived2 : virtual public base {
public:
  int k;
};
class derived3 : 
  public derived1, public derived2 {
public:
  int product() { return i * j * k; }
};

int main()
{
  derived3 ob;

  ob.i = 10; 
  ob.j = 3;
  ob.k = 5;

  cout << "Product is " 
	<< ob.product() << '\n';

  return 0;
}


