#include<iostream>
using namespace std;
int main(){
    int n,i=1, count=0;
    cout<<"enter a number"<<endl;
    cin>>n;

    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        cout<<n<<"is a prime number"<<endl;
    }
    else{
        cout<<n<<"is not a prime number"<<endl;
    }

    return 0;
}