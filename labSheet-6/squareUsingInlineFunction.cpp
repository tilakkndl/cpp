#include <iostream>
using namespace std;
inline int square(int x)
{
    return x * x;
}
int main()
{
    int n;
    cin >> n;
    cout << square(n);
}