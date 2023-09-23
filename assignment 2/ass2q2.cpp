#include<iostream>
using namespace std;

class address{
    private:
    string building;
    string street;
    string city;
    int pin;

    public:
    address()
    {

    }
    address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    string getbuilding(string building)
    {
        return this->building=building;
    }
    void setbuilding(string building)
    {
        this->building=building;
    }
    string getcity(string city)
    {
        return this->city=city;
    }
    void setcity(string city)
    {
        this->city=city;
    }
    string getstreet(string street)
    {
        return this->street=street;
    }
    void setstreet(string street)
    {
        this->street=street;
    }
    int getpin(int pin)
    {
        return this->pin=pin;
    }
    void setpin(int pin)
    {
        this->pin=pin;
    }
    void accept()
    {
        cout<<"enter building,street,city,pin"<<endl;
        cin>>this->building>>this->street>>this->city>>this->pin;
    }
    void display()
    {
        cout<<"building="<<this->building<<endl;
        cout<<"street="<<this->street<<endl;
        cout<<"city="<<this->city<<endl;
        cout<<"pin="<<this->pin<<endl;
    }
};
int main()
{
    address a1;
    a1.accept();
    a1.display();
    a1.setbuilding("omnivas");
    a1.display();
    a1.setstreet("nh-04");
    a1.display();
    a1.setcity("Pune");
    a1.display();
    a1.setpin(416110);
    a1.display();
    cout<<"building is="<<a1.getbuilding("radheshyam")<<endl;
    cout<<"street is="<<a1.getstreet("nh-05")<<endl;
    cout<<"city is="<<a1.getcity("Ahmednagar")<<endl;
    cout<<"pin is="<<a1.getcity("416101")<<endl;
    return 0;
}