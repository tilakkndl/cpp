#include <iostream>
using namespace std;
inline int volume(int x, int y, int z)
{
    return x * y * z;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The volume is " << volume(a, b, c);
}