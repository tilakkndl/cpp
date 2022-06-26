#include<iostream>
using namespace std;
int main(){
    int p, t;
    float r, interest, amount;
    cin>>p>>t>>r;
    interest = (float(p)*t*r)/100;
    amount = p+interest;
    cout<<interest<<endl<<amount;
}