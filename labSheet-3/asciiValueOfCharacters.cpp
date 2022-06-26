#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string arr;
    cin>>arr;
    int length = arr.length();
    cout<<"The ascii value of all character is:";
for(int i =0;i<length;i++){
cout<<int(arr[i])<<endl;
}
}