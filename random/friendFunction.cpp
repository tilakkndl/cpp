// #include <iostream>
// using namespace std;
// class complex
// {
//     int real, img;

// public:
//     void setData(int x, int y)
//     {
//         real = x;
//         img = y;
//     }
//     void displayData()
//     {
//         cout << real << "+ " << img << "i";
//     }
//     friend complex sumOfComplexNumber(complex, complex);
// };
// complex sumOfComplexNumber(complex obj1, complex obj2)
// {
//     complex temp;
//     temp.real = obj1.real + obj2.real;
//     temp.img = obj1.img + obj2.img;
//     return temp;
// }
// int main()
// {
//     complex c1, c2, sum;
//     c1.setData(1, 2);
//     c1.displayData();
//     cout << endl;
//     c2.setData(2, 3);
//     c2.displayData();
//     cout << endl;
//     sum = sumOfComplexNumber(c1, c2);
//     sum.displayData();
// }

#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int realSum(complex, complex);
    int complexSum(complex, complex);
};
class complex
{
    int a, b;
    // making friend funtion to the funtion of other class
    //  friend int calculator ::realSum(complex, complex);
    //  friend int calculator ::complexSum(complex, complex);

    // alt method
    friend calculator;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << a << " + " << b << "i";
    }
};
int calculator::realSum(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::complexSum(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setData(1, 2);
    o2.setData(2, 3);
    calculator calc;
    int res = calc.realSum(o1, o2);
    cout << res << endl;
    int resc = calc.complexSum(o1, o2);
    cout << resc;
}