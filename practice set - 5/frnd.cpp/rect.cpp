#include<iostream>
using namespace std;

class Rect{
    private:
        int len;
        int bred;
    public:
        Rect(int l,int b){
            len=l;
            bred=b;
        }
        friend int area(Rect r);
};

int area(Rect r1){
    return r1.len * r1.bred;
}

int main(){

    Rect r1(4,5);
    cout<<area(r1);
    
    return 0;
}