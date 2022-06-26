#include<iostream>
using namespace std;
int main(){
    int s1, s2, s3, s4, s5;
    cin>>s1>>s2>>s3>>s4>>s5;
    int totalMarks;
    float percentage;
    totalMarks = s1+s2+s3+s4+s5;
    percentage = float(totalMarks)/5;
    cout<<totalMarks<<endl<<percentage<<endl;
}