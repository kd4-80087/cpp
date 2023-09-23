#include<iostream>
using namespace std;

class date
{
    private:
    int day;
    int mon;
    int yr;

public:
void initdate()
{
    day=22;
    mon=02;
    yr=2000;
        
}
void acceptdatefromconsole()
{
    cout<<"enter day="<<endl;
    cin>>day;
    cout<<"enter month="<<endl;
    cin>>mon;
    cout<<"enter year="<<endl;
    cin>>yr;

}    
void printdateonconsole()
{
     cout<<"the date is="<<day<<endl<<"month is="<<mon<<endl<<"year is="<<yr<<endl;
       
}
bool isleapyr()
{
    
    if((yr%4==0 && yr%100==0)||(yr%100==0 && yr%400==0))
       return true;
    else 
        return false;

}
};
int main()
{
    struct date d1;
    int choice,yr;
    do{
        cout<<"choose option 1.initdate 2.showdate 3.year "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: d1.initdate();
                d1.printdateonconsole();
                
                break;
        case 2: d1.acceptdatefromconsole();
                d1.printdateonconsole();
            
            
            break;
        case 3: if (d1.isleapyr())
                {cout<<"yr is leap yr"<<endl;}
            else 
               {cout<<"yr is not leap yr"<<endl;}
        default:cout<<"exit"<<endl;
            break;
        }
    }while (choice!=0);
}