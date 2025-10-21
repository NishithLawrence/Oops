#include<iostream>
using namespace std;
int main(){
    int a,b;
    long long result=1;

    cout<<"enter a"<<endl;
    cin>>a;

    cout<<"enter b"<<endl;
    cin>>b;

    int i=1;
    while(i<=b){
        result=result*a;
        i++;
    }
    cout<<a<<"^"<<b<<"="<<result<<endl;
    return 0;
}