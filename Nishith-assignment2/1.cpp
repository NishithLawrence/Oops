#include <iostream>
#include <vector>
using namespace std;

class SimpleList {
    vector<int> data;

public:
    SimpleList() {}

    void add(int value) {
         data.push_back(value); 
        }
    void removeLast() {
         if(!data.empty()) data.pop_back(); 
        }
    void display() {
        cout << "List: ";
        for (int v : data) cout << v << " ";
        cout << endl;
        }
    int size() {
         return data.size();
        }
};

int main() {
    SimpleList l;
    l.add(10);
    l.add(20);
    l.display();
    l.removeLast();
    l.display();
    cout << "Size: " << l.size();
}
