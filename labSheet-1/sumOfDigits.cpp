#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int digit;
    while(n>0){
digit = n%10;
sum += digit*digit;
n/=10;
    }
    cout<<sum;
}