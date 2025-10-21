#include <iostream>
#include <map>
using namespace std;

class SimpleMap {
    map<string, int> data;

public:
    void add(string key, int value) {
         data[key] = value;
        }
    void showAll() {
        for (auto &p : data)
            cout << p.first << ": " << p.second << endl;
    }
    void search(string key) {
        if (data.find(key) != data.end())
            cout << "Found: " << data[key] << endl;
        else
            cout << "Not found\n";
    }
};

int main() {
    SimpleMap m;
    m.add("Math", 90);
    m.add("Science", 85);
    m.showAll();
    m.search("Math");
}
