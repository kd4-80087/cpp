#include<iostream>
using namespace std;

class student{
    private:
    int rollno;
    string name;
    int marks;
 public:
void initstudent()
{
    rollno=22;
    name="om";
    marks=100;
}
void acceptstudentfromconsole()
{
    cout<<"enter rollno="<<endl;
    cin>>rollno;
    cout<<"enter name="<<endl;
    cin>>name;
    cout<<"enter marks="<<endl;
    cin>>marks;
}
void printstudentonconsole()
{
    cout<<"student roll no="<<rollno<<"name="<<name<<"marks="<<marks<<endl;
}
};
int main()
{
    student s1;
    int choice;
    do
    {
     cout<<"choose option 1.initstudent 2.acceptstudent 3.showstudent"<<endl;
     cin>>choice;
     switch (choice)
     {
     case 1: s1.initstudent();
             s1.printstudentonconsole();
        break;
     case 2: s1.acceptstudentfromconsole();
             
             break;
     case 3: 
            s1.printstudentonconsole();
            break;
     default:cout<<"exit"<<endl;
        break;
     }
    } while (choice!=0);
    
}