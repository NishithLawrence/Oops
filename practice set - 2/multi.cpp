#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, i=1;
    cout<<"enter a number";
    cin>>n;

    do{
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    } while(i<=10);

    return 0;
}