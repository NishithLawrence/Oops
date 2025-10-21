#include<iostream>
#include<cmath>
using namespace std;

int main(){
        int n,reverse=0,rem;
        cout<<"enter a number";
        cin>>n;

        cout<<"digits in reverse order";
        do{
            int rem=n%10;
            reverse=reverse*10+rem;
            n=n/10;
        } while(n>0);
        cout<<reverse;
        
    return 0;
}