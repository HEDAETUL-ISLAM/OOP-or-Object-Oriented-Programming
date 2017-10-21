#include<iostream>
using namespace std;
int main(){
 string str("My Hello World");
 cout<<str.find("Hello"); 
  str="I Love The World";
  int n;
  cout<<str.find_first_of("Low")<<endl;
  str.erase(5,8);
  cout<<str<<endl;
}

