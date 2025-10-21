#include<iostream>
using namespace std;
class dist{
    private:
        float feet;
        float inches;
    public:
     dist(){
        feet=0;
        inches=0;
     }
     dist(float f){
        feet=f;
        inches=0;
     }
     dist(float f, float i){
        feet=f;
        inches=i;
     }

     float getfeet(){
        return feet;
     }
     float getinches(){
        return inches;
     }
};

int main(){

    dist d1;
    cout<<d1.getfeet()<<d1.getinches()<<endl;
    dist d2(10);
    cout<<d2.getfeet()<<d2.getinches()<<endl;
    dist d3(10,50);
    cout<<d3.getfeet()<<d3.getinches()<<endl;


    return 0;
}