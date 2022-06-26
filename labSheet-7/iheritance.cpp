#include <iostream>
using namespace std;
#include <math.h>
class shape
{
public:
    int l;

public:
    void getShape()
    {
        cout << "Enter the length";
        cin >> l;
    }
    void displayShape()
    {
        cout << "The length is" << l << endl;
    }
};

class Rectangle : public shape
{
    int breadth;

public:
    void getRectangle()
    {
        cout << "Enter length";
        cin >> l;
        cout << "Enter breadth";
        cin >> breadth;
    }
    void areaRectangle()
    {
        cout << l << endl;
        cout << "The area of rectangle" << l * breadth;
    }
};

class Traingle : public shape
{
    int g, h;

public:
    void getTraingle()
    {
        cout << "Enter 1st length";
        cin >> l;
        cout << "Enter 2nd side";
        cin >> g;
        cout << "Enter 3rd side";
        cin >> h;
    }
    void areaTraingle()
    {
        float s = (l + g + h) / 2.0;
        cout << "The area of traingle is " << sqrt(s * (s - l) * (s - g) * (s - h));
    }
};
int main()
{

    Rectangle rec;
    rec.getRectangle();
    rec.areaRectangle();

    Traingle tr;
    tr.getTraingle();
    tr.areaTraingle();
}