#include <iostream>
using namespace std;
inline int area(int l, int b)
{
    return l * b;
}
int main()
{
    int l, b;
    cin >> l >> b;
    cout << "The area is " << area(l, b);
}