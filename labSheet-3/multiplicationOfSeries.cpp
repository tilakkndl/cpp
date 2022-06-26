// : ½  2/3  ¾  4/5  5/6…………………..n-1/n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum = 1;
    for(int i =1;i<=n;i++){
        sum*=(float(i)/(i+1));
    }
    cout<<sum;
}