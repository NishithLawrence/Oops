#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter a number"<<endl;
    cin>>a>>b>>c;

    double d=b*b-4*a*c;
    if(d>=0){
        double root1=(-b+sqrt(d))/(2*a);
        double root2=(-b+sqrt(d))/(2*a);
        cout<<"roots 1:"<<root1<<endl;
        cout<<"roots 2:"<<root2<<endl;
    }
    else{
        cout<<"roots are imaginary";
    }

}
