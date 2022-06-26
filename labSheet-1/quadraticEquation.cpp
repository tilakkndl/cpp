#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(sqrt(pow(b, 2)-4*a*c)<0){
cout<<"Roots are imaginary";
return 0;
    }
    if(sqrt(pow(b, 2)-4*a*c)== 0){
        cout<<"There is only one root"<< float(-b)/(2*a);
        return 0;
    }
    int r1 = (float(-b)+sqrt(pow(b, 2)-4*a*c))/(2*a);
     int r2 = (float(-b)-sqrt(pow(b, 2)-4*a*c))/(2*a);
     cout<<r1<<endl<<r2<<endl;
}