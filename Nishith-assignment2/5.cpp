#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "Person details\n"; 
    }
};

class Athlete {
public:
    void display() {
        cout << "Athlete details\n";
    }
};

class SportsPerson : public Person, public Athlete {
public:
    void show() {
        Person::display(); 
        Athlete::display();
    }
};

int main() {
    SportsPerson s;
    s.show();
}
