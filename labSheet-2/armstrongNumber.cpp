#include<iostream>
using namespace std;
int main(){
    int n, temp;
    cin>>n;
    int digit;
    int sum = 0;
    temp = n;
    while(n>0){
digit = n%10;
sum+=digit*digit*digit;
n/=10;
    }
    if(temp==sum){
        cout<<"Number is Armstrong";
    }
    else
    cout<<"Number is not armstorng";
}