#include<iostream>
using namespace std;
int main(){
    int arr[] ={1, 2, 3, 0};
    int check = 1;
    for(int i = 0;i<3;i++){
        if(i<3&&arr[i]<=arr[i+1]){
check = 1;
        }
        else{
            cout<<"Not sorted";
            return 0;
        }
    }
    cout<<"Sorted array is "<<endl;
for(int i =0;i<4;i++){
    cout<<arr[i]<<" ";
}
}