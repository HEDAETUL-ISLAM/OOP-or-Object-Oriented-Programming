/*Create a base class called building 
that stores the number of floors a building has and its total square footage.
Create a derived class called house 
that inherits (public inheritance) building and also stores the number of bedrooms
and number of bathrooms.
Create an object of class house such 
that it can set values and get values of all the data of both the classes from the main function*/

 #include<iostream>
 using namespace std;
 
 class building{
 int number_of_floors;
 int square_footage;
 public:
     int Setvalues(int x, int y){
     number_of_floors=x;
     square_footage=y;
     }
     int Getvalues(){
     cout<<number_of_floors<<endl;
     cout<<square_footage<<endl;
     }
 };
 class house:public building{
 int bedrooms;
 int bathrooms;
 public:
     int setvalues(int a, int b){
     bedrooms=a;
     bathrooms=b;
     }
     int getvalues(){
     cout<<bedrooms<<endl;
     cout<<bathrooms<<endl;
     }
};
int main()
{
    house obj;
    obj.Setvalues(5,5000);
    obj.Getvalues();
    obj.setvalues(15,10);
    obj.getvalues();

    return 0;

}
