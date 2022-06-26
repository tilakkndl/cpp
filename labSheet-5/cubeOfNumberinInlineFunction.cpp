#include <iostream>
using namespace std;
inline int cube(int x)
{
    return x * x * x;
}
int main()
{
    int n;
    cin >> n;
    cout << "The cube of number is " << cube(n);
}