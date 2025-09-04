#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,r,t,si;

    cout<<"enter principle";
    cin>>p;
    cout<<"enter rate of intrest";
    cin>>r;
    cout<<"enter time(in years)";
    cin>>t;

    si=p*r*t/100;
    cout<<si;
    return 0;
}