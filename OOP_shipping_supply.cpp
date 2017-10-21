#include <iostream>
using namespace std;

class shippedItems
{
    int number;
    float length;
    float breadth;
    float height;
    string destination;
    string finalDeliveryDate;
    public:
    int weight;
    void setData(int n, int w, float l, float b, float h, string d, string f)
    {
        number = n;
        weight = w;
        length = l;
        breadth = b;
        height = h;
        destination = d;
        finalDeliveryDate = f;
    }
    void displayData(char s)
    {
        switch(s)
        {
            case 'n' : cout<<number; break;
            case 'w' : cout<<weight; break;
            case 'l' : cout<<length; break;
            case 'b' : cout<<breadth; break;
            case 'h' : cout<<height; break;
            case 'd' : cout<<destination; break;
            case 'f' : cout<<finalDeliveryDate; break;
            default : break;
        }
    }
    void showAll()
    {
        cout<<"Number: "<<number<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Final Delivery Date: "<<finalDeliveryDate<<endl;
    }
    static int shipped;
    static void shippedUpdate(){
        shipped++;
    }
};

class TransportationSystem
{
    int scheduleNumber;
    string type;
    int driveRouteNo;
   public:
    void setData(int s, string t, int d)
    {
        scheduleNumber = s;
        type = t;
        driveRouteNo = d;
    }
    void displayData(char s)
    {
        switch(s)
        {
            case 's': cout<<scheduleNumber; break;
            case 't': cout<<type; break;
            case 'r': cout<<driveRouteNo; break;
            default: break;
        }
    }
    friend void transportRoute(TransportationSystem t);
};

class retailCenter
{
    int id;
    string address;
   public:
    void setData(int i, string a)
    {
        id = i;
        address = a;
    }
    void displayData(char s)
    {
        switch(s)
        {
            case 'i' : cout<<id; break;
            case 'a' : cout<<address; break;
            default : break;
        }
    }

    friend void transportRoute(TransportationSystem t);
};

void transportRoute(TransportationSystem t)
{
    cout<<t.driveRouteNo<<endl;
}
int shippedItems::shipped;





int main()
{
    shippedItems s[5];
    int i, prioItems=0, ordiItems=0;

    s[0].setData(5,10,3,4,2,"USA","3-8-2017");
    shippedItems::shippedUpdate();
    s[1].setData(6,26,4,6,5,"Ireland","5-8-2017");
    shippedItems::shippedUpdate();
    s[2].setData(10,53,5,9,4,"UK","6-9-2017");
    shippedItems::shippedUpdate();
    s[3].setData(1,1,1,1,1,"AIUB","2-8-2017");
    shippedItems::shippedUpdate();
    s[4].setData(4,25,5,3,5,"Mirpur","25-9-2017");
    shippedItems::shippedUpdate();

    retailCenter r[2];
    r[0].setData(1,"Dhaka");
    r[1].setData(2,"USA");

    TransportationSystem t[3];
    t[0].setData(5,"Flight",1822);
    t[1].setData(6,"Truck",510);
    t[2].setData(9,"Boat",21);

    cout<<"#1"<<endl;
    cout<<"Retail center: "; r[0].displayData('a');
    cout<<"\tNumber of Items: "; s[0].displayData('n');
    cout<<"\tDestination: "; s[0].displayData('d');
    cout<<"\nTransportation type: "; t[0].displayData('t');
    cout<<"\tFinal Delivery Date: "; s[0].displayData('f');
    //(optional) cout<<"Route no.: "; t[0].displayData('r');
    cout<<endl;

    cout<<endl<<"#2"<<endl;
    cout<<"Retail center: "; r[0].displayData('a');
    cout<<"\tNumber of Items: "; s[4].displayData('n');
    cout<<"\tDestination: "; s[4].displayData('d');
    cout<<"\nTransportation type: "; t[1].displayData('t');
    cout<<"\tFinal Delivery Date: "; s[4].displayData('f');
    //(optional) cout<<"Route no.: "; t[0].displayData('r');
    cout<<endl;

    cout<<endl<<"#3"<<endl;
    cout<<"Retail center: "; r[0].displayData('a');
    cout<<"\tNumber of Items: "; s[3].displayData('n');
    cout<<"\tDestination: "; s[3].displayData('d');
    cout<<"\nTransportation type: "; t[2].displayData('t');
    cout<<"\tFinal Delivery Date: "; s[3].displayData('f');
    //(optional) cout<<"Route no.: "; t[0].displayData('r');
    cout<<endl;

    cout<<endl<<"#4"<<endl;
    cout<<"Retail center: "; r[1].displayData('a');
    cout<<"\tNumber of Items: "; s[2].displayData('n');
    cout<<"\tDestination: "; s[2].displayData('d');
    cout<<"\nTransportation type: "; t[0].displayData('t');
    cout<<"\tFinal Delivery Date: "; s[2].displayData('f');
    cout<<"\nRoute no.: "; t[0].displayData('r');
    cout<<endl;

    cout<<endl<<"#5"<<endl;
    cout<<"Retail center: "; r[1].displayData('a');
    cout<<"\tNumber of Items: "; s[1].displayData('n');
    cout<<"\tDestination: "; s[1].displayData('d');
    cout<<"\nTransportation type: "; t[0].displayData('t');
    cout<<"\tFinal Delivery Date: "; s[1].displayData('f');
    cout<<"\nRoute no.: "; t[0].displayData('r');
    cout<<endl;

    for(i=0;i<5;i++)
    {
        if(s[i].weight>25)
            prioItems++;
        else ordiItems++;
    }
    cout<<endl<<endl<<endl<<"---------------------------"<<endl<<endl;
    cout<<"Total Priority Items= "<<prioItems<<endl;
    cout<<"Total Ordinary Items= "<<ordiItems<<endl<<endl;
    cout<<"Total shipped items= "<<shippedItems::shipped<<endl;

    return 0;
}

