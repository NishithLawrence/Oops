#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, sum=0, remainder;
    cout<<"enter a number";
    cin>>n;

    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}