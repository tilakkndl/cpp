#include <iostream>
using namespace std;
class time
{
    int hr, min, sec;

public:
    time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }

    time(int x, int y, int z)
    {
        hr = x;
        min = y;
        sec = z;
    }
    time operator+(time c)
    {
        time temp;
        if (sec + c.sec < 60)
        {
            temp.sec = sec + c.sec;
        }
        else
        {
            temp.min++;
            temp.sec = sec + c.sec - 60;
        }
        // for min
        if (min + temp.min + c.min < 60)
        {
            temp.min = min + c.min + temp.min;
        }
        else
        {
            temp.hr++;
            temp.min = min + temp.min + c.min - 60;
        }
        temp.hr = temp.hr + hr + c.hr;
        return temp;
    }
    void displayResult()
    {
        cout << hr << "hr " << min << " min " << sec << " sec";
    }
};
int main()
{
    time t1(8, 40, 50), t2(7, 50, 40), t3;
    t3 = t1 + t2;
    t3.displayResult();
}