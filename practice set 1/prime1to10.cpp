#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    for(int i=2; i<=n; i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        else{
            cout<<"is prime"<<endl;
            break;
        }

    }
    return 0;
}