#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter number a:"<<endl;
    cin>>a;
    cout<<"enter number b:"<<endl;
    cin>>b;

    if(a>b){
        cout<<"a is greater"<<endl;
    }
    else if(a<b){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"both are equal"<<endl;
    }
    return 0;
}