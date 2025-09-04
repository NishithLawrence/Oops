#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number a:"<<endl;
    cin>>a;
    int b;
    cout<<"enter number b:"<<endl;
    cin>>b;
    int c;
    cout<<"enter number c:"<<endl;
    cin>>c;

    if(a>b && a>c){
        cout<<"a is greater"<<endl;
    }
    if(b>a && b>c){
        cout<<"b is greater"<<endl;
    }
    if(c>a && c>b){
        cout<<"c is greater"<<endl;
    }
    else{
        cout<<"all are equal"<<endl;
    }
    return 0;
}