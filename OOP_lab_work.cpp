#include<iostream>
using namespace std;

class Point2D
{
	private:
		int x ;
		int y ;
	public:
		Point2D(int xx , int yy ){
			x = xx ; y = yy ;
		}
		void setx(int xx) {	
			x = xx; 
		}
		int getx(){
			return x ;
		}

		void sety(int yy) {
			y = yy; 
		}
		int gety(){
			return y ;
		}

};
class Point3D:public Point2D{
	private:
		int z;
	public:
		Point3D(int xx,int yy,int zz):Point2D(xx,yy){
			z=zz;
		}
		void print(){
			cout<<"x is:"<<getx()<<endl;
			cout<<"y is:"<<gety()<<endl;
			cout<<"z is:"<<z;
		}
};
/*
	Write a class name Point3D which will inherit Point2D class.
	It will have following members
	one private data member 'z' which will hold z value of a 3D Point
	one print() function print x,y,z value of a 3D Point
	Write necessary functions(ex: constructor,destructor) as necessary so that the main function will work properly without
	any modification
*/
int main()
{
	Point3D p(10,20,30);
	
	p.print();

/*
Output would be
---------------
x is 10
y is 20
z is 30
*/
	return 0 ;
}

