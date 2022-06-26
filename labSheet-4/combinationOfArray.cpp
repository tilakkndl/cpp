#include<iostream>
using namespace std;
int main(){
    int data1[] = {1, 2, 3};
    int data2[] = {4, 5, 6, 7};
    int length1 = sizeof(data1)/(sizeof(data1[0]));
int length2 = sizeof(data2)/(sizeof(data2[0]));
int j=0;
    int data3[length1+length2];
    for(int i =0;i<(length1+length2);i++){
        if(i<length1){
            data3[i] = data1[i];
        }
        else{
            data3[i] = data2[j];
            j++;
        }
    }
    for(int i =0;i<(length1+length2);i++){
cout<<data3[i]<<" ";
    }
}