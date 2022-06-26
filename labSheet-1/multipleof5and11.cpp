#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n%5 == 0 && n%11 == 0){
        cout<<n<<" is multiple of 5 and 11";
    }

}