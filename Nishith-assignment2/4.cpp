#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName(string n) { 
        name = n; 
    }
};

class Employee : public Person {
public:
    int id;
    void getId(int i) {
        id = i;
    }
};

class Manager : public Employee {
public:
    string dept;
    void getDept(string d) {
        dept = d;
    }
    void show() {
        cout << name << " (" << id << ") - " << dept << endl;
    }
};

int main() {
    Manager m;
    m.getName("Ravi");
    m.getId(101);
    m.getDept("IT");
    m.show();
}
