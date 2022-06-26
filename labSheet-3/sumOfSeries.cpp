// 1+2*1+3*2+……………………N*N-1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 1;
    for(int i = 2;i<=n;i++){
sum+=i*(i-1);
    }
    cout<<sum;
}