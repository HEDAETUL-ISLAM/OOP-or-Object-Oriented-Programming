#include<iostream>
using namespace std;

class AIUB{
	private:
		int cse;
	public:
		AIUB(){
			cse=0;
		}
	friend void csedep(AIUB &ob);	
};
void csedep(AIUB &ob){
	ob.cse=99;
	cout<<ob.cse<<endl;
}
int main()
{
	AIUB ob1;
	csedep(ob1);
}
