// // ********dynamically running constructor*************
// #include <iostream>
// using namespace std;

// class BankDeposit
// {
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

// public:
//     BankDeposit() {}
//     BankDeposit(int p, int y, float r); // r can be a value like 0.04
//     BankDeposit(int p, int y, int r);   // r can be a value like 14
//     void show();
// };

// BankDeposit ::BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// BankDeposit ::BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r) / 100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// void BankDeposit ::show()
// {
//     cout << endl
//          << "Principal amount was " << principal
//          << ". Return value after " << years
//          << " years is " << returnValue << endl;
// }

// int main()
// {
//     BankDeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;

//     cout << "Enter the value of p y and r" << endl;
//     cin >> p >> y >> r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout << "Enter the value of p y and R" << endl;
//     cin >> p >> y >> R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }

// // ****************copy constructor**********
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called as z2 is already initialized
    z2.display();

    Number z3 = z; // Copy constructor invoked as z3 is declared here itself
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
