#include<iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<"enter a negative number to end"<<endl;
        cin>>n;

        if(n>=0){
            cout<<"You entered:"<<n<<endl;
        }
    } 
    while(n>=0);
        cout<<"The Loop ends because the number is:"<<n<<endl;

    return 0;
}