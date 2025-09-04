#include<iostream> //(≥90), B (80–89),C (70–79), D (60–69), F (below 60).
#include<cmath>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:"<<endl;
    cin>>marks;

    if(marks>=90){
        cout<<"Grade-A"<<endl;
    }
    else if(marks>=80 && marks<=89){
        cout<<"Grade-B"<<endl;
    }
    else if(marks>=70 && marks<=79){
        cout<<"Grade-C"<<endl;
    }
    else if(marks>=60 && marks<=69){
        cout<<"Grade-D"<<endl;
    }
    else if(marks<60){
        cout<<"Grade-F"<<endl;
    }
    return 0;
}