#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, reverse=0,remainder;
    cout<<"enter a number";
    cin>>n;

    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}