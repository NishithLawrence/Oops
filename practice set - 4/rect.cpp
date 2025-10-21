#include<iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int breadth;
    
    public:
        rectangle(int l, int b){
            length=l;
            breadth=b;
        }

        int getArea(){
            return length*breadth;
        }
};

int main(){

    rectangle r1(10,5);
    cout<<"area of rectangle: "<<r1.getArea()<<endl;

    return 0;
}