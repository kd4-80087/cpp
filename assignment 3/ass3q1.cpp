/*Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include<iostream>
using namespace std;

class volume{
    private:
    int len;
    int wid;
    int ht;

    public:
    volume()
    {
        this->len =0;
        this->wid = 0;
        this->ht = 0;
    }
    volume(int len,int wid,int ht)
    {
        this->len =len;
        this->wid = wid;
        this->ht = ht;
    }
    // void accept()
    // {
    //     // 
    // }
    void display()
    {
        cout<<"volume is "<<endl;
    }
    int vol()
    {
        return len*wid*ht;
    }
};
int menu()
{
    int choice;
    cout<<"******************"<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.accept"<<endl;
    cout<<"2.display"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
        cout<<"*******************"<<endl;

    return choice;
    cout<<"*******************"<<endl;
}

int main()
{
    int choice,l,w,h;
    volume v;
    volume v1;

    while((choice=menu())!=0)
        switch(choice)
        {
            case 1:
                cout<<"enter length"<<endl;
                cin>>l;
                cout<<"enter breadth"<<endl;
                cin>>w;
                cout<<"enter height"<<endl;
                cin>>h;
                v1= volume(l,w,h);

                    break;
            case 2:
                    // cout<<v.vol();
                    
                    cout<<"Volume is "<<v1.vol()<<endl;
                    // v1.display();
                    break;
            default: cout<<"invalid"<<endl;
                    break;
         }
}