#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, original, reverse=0,remainder;
    cout<<"enter a number"<<endl;
    cin>>n;

    original=n;

    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }

    if(original==reverse){
        cout<<original<<"it is a palindrome number";
    }
    else{
        cout<<original<<"not a palindrome";
    }
}