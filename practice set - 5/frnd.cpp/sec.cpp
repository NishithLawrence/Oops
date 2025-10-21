#include<iostream>
using namespace std;
class box{
    int length=10;
    friend void show(box);
};
void show(box a){
    cout<<a.length;
};
int main(){
    box b;
    show(b);
    return 0;
}