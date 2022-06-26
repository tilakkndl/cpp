#include <iostream>
using namespace std;
class Number
{
private:
    int a, b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }
    int getMax()
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    Number obj(3, 4);
    cout << "The max number is " << obj.getMax();
}