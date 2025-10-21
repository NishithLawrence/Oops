#include<iostream>
using namespace std;
class circle{
    private:
        double radius;
    
    public:
        void setRadius(double r){
            radius=r;
        }
        double getRadius(){
            return radius;
        }

        double getArea(){
            return 3.14159 * radius * radius;
        }
};

int main(){

    circle c1;
    c1.setRadius(5);
    cout<<"Radius of the circle: "<<c1.getRadius()<<endl;
    cout<<"Area of the circle: "<<c1.getArea()<<endl;

    return 0;
}