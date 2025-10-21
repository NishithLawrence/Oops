#include <iostream>
using namespace std;

class Shape {
public:
    double width, height;
    void setData(double w, double h) {
        width = w; height = h; 
    }
};

class Rectangle : public Shape {
public:
    double area() { 
        return width * height;
    }
    double perimeter() { 
        return 2 * (width + height);
    }
};

int main() {
    Rectangle r;
    r.setData(5, 3);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
}
