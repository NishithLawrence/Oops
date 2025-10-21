#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter anumber:"<<endl;
    cin>>n;

    int fact=1;
    int i=0;

    while(i<=n){
        fact=fact*i;
        i++;
    }
    cout<<fact<<endl;

    return 0;
}