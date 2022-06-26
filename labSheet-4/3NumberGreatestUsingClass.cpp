#include <iostream>
using namespace std;
class Number
{
private:
    int a, b, c;

public:
    Number(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        // cout << a << b << z;
    }
    void getMax()
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << a;
            }
            else
            {
                cout << c;
            }
        }
        else
        {
            if (b > c)
            {
                cout << b;
            }
            else
            {
                cout << c;
            }
        }
    }
};
int main()
{
    Number obj(3, 4, 6);
    obj.getMax();
}