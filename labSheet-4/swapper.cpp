#include <iostream>
using namespace std;
class Swapper
{
    int a, b;

public:
    void getX(int x)
    {
        a = x;
    }
    void getY(int y)
    {
        b = y;
    }
    void swapper()
    {
        int temp = a;
        a = b;
        b = temp;
        cout << a << " " << b;
    }
};
main()
{
    Swapper obj;
    obj.getX(1);
    obj.getY(2);
    obj.swapper();
}