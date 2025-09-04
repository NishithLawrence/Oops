#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n>0){
        cout<<"number is postive";
    }
    else if(n<0){
        cout<<"number is negative";
    }
    else{
        cout<<"zero";
    }
    return 0;
}