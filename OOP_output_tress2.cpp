#include<iostream>
using namespace std;

class D{
private:
    int a;
    static int counter;
public:
    D(){
    counter++;
    cout<<"Default Constructor: "<<counter<<endl;
    }
    D(int x){
    counter++;
    a=x;
    cout<<"Parameterized Constructor: "<<counter<<endl;
    }
    void setData(int y){
    a=y;
    }
    ~D(){
    cout<<"Destructor: "<<counter<<endl;
    counter--;
    }
    static void showValueOfCounter(){

    cout<<"Counter Value: "<<counter<<endl;

    }
    void getData();
friend void checkData(D d1);
};
int D::counter;
void D::getData(){
cout<<a<<endl;

}
void checkData(D d1){
if(d1.a>0){
cout<<"greater than 0"<<endl;
}
else if(d1.a==0){
cout<<"equal to 0"<<endl;

}
else if(d1.a<0){
cout<<"less than 0"<<endl;

}
else{
cout<<"invalid"<<endl;

}

}
int main(){
D::showValueOfCounter();
D d1;
d1.setData(12);
d1.getData();
D::showValueOfCounter();
d1.showValueOfCounter();
checkData(d1);
D::showValueOfCounter();
D d2(-2);
d2.getData();
checkData(d2);
d2.showValueOfCounter();
D *d3=new D;
d3->setData(0);
checkData(*d3);
delete d3;
D *d4=new D(1);
d4->getData();
checkData(*d4);


return 0;
}

