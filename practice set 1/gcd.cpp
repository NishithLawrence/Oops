#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,gcd=0;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;

    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}