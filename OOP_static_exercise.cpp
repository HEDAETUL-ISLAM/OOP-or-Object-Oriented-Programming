#include<iostream>
using namespace std;
class Counter  {
private:
    static int count;
    int objectNo;
public:
    Counter(int x) { 
        objectNo = x;
        count = x; 
     }
 
    int getObjectNo() { 
        return objectNo; 
    }

    int getCount() { 
        return count; 
    }
};
int Counter::count = 1;
 
int main()
{
    Counter oFirst(1);
    Counter oSecond(2);
    Counter oThird(6);
 
    
    cout << oFirst.getObjectNo() << endl;
    cout << oSecond.getObjectNo() << endl;
    cout << oThird.getObjectNo() << endl;

    cout << oFirst.getCount() << endl;
    cout << oSecond.getCount() << endl;
    cout << oThird.getCount() << endl;
    return 0;
}
 

