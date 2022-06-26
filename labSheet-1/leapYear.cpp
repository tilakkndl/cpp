#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400 == 0){
        cout<<"Leap Year";
    }
    else if(n%100 != 0){
        cout<<"Not a leap year";
    }
    else if(n%4){
        cout<<"Leap year";
    }
}