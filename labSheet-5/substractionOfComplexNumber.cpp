#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    void displayResult()
    {
        cout << real << " "
             << "+" << img << "i";
    }
};
int main()
{
    complex obj1(3, 2), obj2(1, 1), obj3;
    obj3 = obj1 - obj2;
    obj3.displayResult();
}