#include <iostream>
using namespace std;

class Sports;
class Student {
    int marks;
public:
    Student(int m) {
        marks = m;
    }
    friend void totalPerformance(Student, Sports);
};

class Sports {
    int score;
public:
    Sports(int s) {
        score = s;
    }
    friend void totalPerformance(Student, Sports);
};

void totalPerformance(Student s, Sports sp) {
    cout << "Total performance: " << s.marks + sp.score << endl;
}

int main() {
    Student st(85);
    Sports sp(25);
    totalPerformance(st, sp);
}
