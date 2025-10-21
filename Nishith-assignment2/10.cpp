#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) {
        r = radius;
    }
    double area() {
        return 3.14 * r * r;
    }
};

class Square : public Shape {
    double side;
public:
    Square(double s) {
        side = s;
    }
    double area() {
        return side * side;
    }
};

int main() {
    Shape *s1 = new Circle(5);
    Shape *s2 = new Square(4);
    cout << "Circle area: " << s1->area() << endl;
    cout << "Square area: " << s2->area() << endl;
}
