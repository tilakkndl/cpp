#include <iostream>
#include <string>
using namespace std;
class Clock
{

public:
    string model;
    int price;
    string manufacturer;

    void getData()
    {
        cout << "Enter model";
        cin >> model;
        cout << "Enter price";
        cin >> price;
        cout << "Enter manufacturer";
        cin >> manufacturer;
    }
    void displayClock();
};
class Wall_Clock : public Clock
{
    // string model, manufacturer;
    int hr, min, sec;

public:
    Wall_Clock()
    {
        manufacturer = "";
        model = "";
        price = 0;
        hr = 0;
        min = 0;
        sec = 0;
    }
    void getwallClockData()
    {
        cout << "Enter hr";
        cin >> hr;
        cout << "Enter min";
        cin >> min;
        cout << "Enter sec";
        cin >> sec;
    }
    void displayWallClockData()
    {
        cout << "Hour is " << hr << endl;
        cout << "Minute is " << min << endl;
        cout << "Second is " << sec << endl;
    }
};
void Clock::displayClock()
{
    cout << "Model no is " << model;
    cout << "Manufacturer" << manufacturer;
    cout << "price " << price;
}

int main()
{
    Wall_Clock clock1, clock2;
    cout << "Enter data for clock1";
    clock1.getwallClockData();
    cout << "The data of clock1 is " << endl;
    clock1.displayWallClockData();
    cout << "Enter data for clock2" << endl;
    clock2.getwallClockData();
    cout << "The data of clock2 is " << endl;
    clock2.displayWallClockData();
}