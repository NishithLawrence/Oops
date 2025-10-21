#include <iostream>
using namespace std;

class Sorter {
    int arr[5];
public:
    void input() {
        cout << "Enter 5 numbers: ";
           for (int i = 0; i < 5; i++) cin >> arr[i];
    }

    void bubbleSort() {
        for (int i = 0; i < 5 - 1; i++)
            for (int j = 0; j < 5 - i - 1; j++)
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
    }

    void display() {
        for (int i = 0; i < 5; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Sorter s;
    s.input();
    s.bubbleSort();
    cout << "Sorted data: ";
    s.display();
}
