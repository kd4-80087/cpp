#include<iostream>
using namespace std;

class Time
{
private:
    int h;
    int m;
    int s;

public:
    Time()
    {
    }

    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    int getHour()
    {
        return this->h;
    }

    int getMinute()
    {
        return this->m;
    }

    int getSeconds()
    {
        return this->s;
    }

    void accepttime()
    {
        cout << "Enter hour =" << this->h;
        cin >> this->h;
        cout << "Enter minutes = " << this->m;
        cin >> this->m;
        cout << "Enter Seconds = " << this->s;
        cin >> this->s;
        cout << "******************" << endl;
    }

    void printTime()
    {
        cout << "TIME = " << h << ":" << m << ":" << s << endl;
        cout << "******************" << endl;
    }

    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }
    void setSeconds(int s)
    {
        this->s = s;
    }
};

int main()
{
    Time **arr = new Time *[3]; // Dynamic Array of Time

    /*for (int i = 0; i < 3; i++) // Dynamic Memory Allocation for Objects
    {
        arr[i] = new Time();
    }*/

    arr[0] = new Time(1, 10, 10);  // Dynamic Memory Allocation for Objects
    arr[1] = new Time(2, 20, 20);
    arr[2] = new Time(3, 30, 30);

    /*for (int i = 0; i < 3; i++) // Entering Values for data members Time Class
    {
        cout << "Enter Time for index (" << i << ") =" << endl;
        arr[i]->accepttime();
    }*/

    for (int i = 0; i < 3; i++) // Displaying the date members of Time Class
    {
        cout << "Time at index (" << i << ") =" << endl;
        arr[i]->printTime();
    }

    for (int i = 0; i < 3; i++) // Deallocating Dynamic Memory
        delete arr[i];
    delete[] arr;

    return 0;
}