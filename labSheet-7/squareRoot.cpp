#include <iostream>
#include <math.h>
using namespace std;
inline float squareRoot(int x)
{
    return sqrt(x);
}
int main()
{
    int n;
    cin >> n;
    cout << "The square root is " << squareRoot(n);
}