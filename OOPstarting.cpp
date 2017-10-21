#include<iostream>
using namespace std;

class car{
	private:
		string name;
		string model;
		int CC;
		float fuel;
	public:	
		car(string name,string model,int CC,float fuel){
			this->name=name;
			this->model=model;
			this->CC=CC;
			this->fuel=fuel;
		}
		
		void getPro(){
			cout<<name<<endl;
			cout<<model<<endl;
			cout<<CC<<endl;
			cout<<fuel<<endl;
		}
		
		
		/*void setProparties(string name,string model,int CC,float fuel){
			this->name=name;
			this->model=model;
			this->CC=CC;
			this->fuel=fuel;
		}*/
};

int main()
{
	car car1("BMW","ieug",5000,40.5);
	//car1.setProparties("BMW","ieug",5000,40.5);
	
	car1.getPro();
	return 0;
}
