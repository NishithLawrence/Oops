#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }            
    double add(double a, double b) {
        return a + b;
    }
};

class Base {
public:
    virtual void show() {
        cout << "Base class\n"; 
    }    
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class\n";
    }
};

int main() {
    Math m;
    cout << "Sum: " << m.add(3, 4) << endl;
    cout << "Sum: " << m.add(2.5, 4.1) << endl;

    Derived d;
    Base *b = &d;
    b->show();
}
