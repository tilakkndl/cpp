#include<iostream>
using namespace std;
int main(){
    int n= 10;
    for(int i = 1;i<=n;i++){
        cout<<i*i<<" ";
    }
    cout<<endl;
    for(int i = 1;i<n;i++){
        cout<<i*i*i<<" ";
    }
}