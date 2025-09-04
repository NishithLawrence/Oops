#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;

    if(n%2==0){
        cout<<"number div by 2"<<endl;
    }
    if(n%3==0){
        cout<<"number div by 3"<<endl;
    }
    if(n%5==0){
        cout<<"number div by 5"<<endl;
    }
    if(n%7==0){
        cout<<"number div by 7"<<endl;
    }
    if(n%10==0){
        cout<<"number div by 10"<<endl;
    }
    if(n%2==0 && n%3==0 && n%5==0 && n%7==0 && n%10==0){
        cout<<"div by all"<<endl;
    }
    else{
        cout<<"not div by others";
    }
    return 0;
}