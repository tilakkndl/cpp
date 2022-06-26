#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[30];
    for(int i = 1;i<=30;i++){
arr[i] = i*pow(-1, i+1);
    }
    cout<<"The sequence is: ";
    for(int i = 1;i<=30;i++){
        cout<<arr[i]<<" ";
    }
}