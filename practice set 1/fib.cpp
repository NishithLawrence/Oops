#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, a=0, b=1;
    cout<<"enter no.of terms";
    cin>>n;

    for(int i=0;i<=n;i++){
        int next=a+b;
        cout<<a;
        a=b;
        b=next;
    }
    return 0;
}