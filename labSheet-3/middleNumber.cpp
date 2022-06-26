#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a>b){
        if(c>a){
            cout<<a;
        }
        else{
            if(b>c){
cout<<b;
            }
            else{
                cout<<c;
            }
        }
    }
        else{
            if(b>c){
                cout<<c;
            }
            else{
                if(b>a){
                    cout<<b;
                }
                else{
                    cout<<a;
                }
            }
        }
    }

