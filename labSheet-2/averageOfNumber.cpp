#include<iostream>
using namespace std;
int greatestNo(int a, int b, int c){
   if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int smallestNumber(int a, int b, int c){
   if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"Sum of three number = "<< a+b+c<<endl;
    cout<<"Avearge of thre number = "<< (float(a+b+c))/3<< endl;
    cout<<"The largest number is"<<greatestNo(a,b,c)<<endl;
    cout<<"The smallest number is "<<smallestNumber(a, b, c);
}