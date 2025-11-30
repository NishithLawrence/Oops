#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterToRight(const vector<int>& a) {
    int n = (int)a.size();
    vector<int> res(n, -1);
    stack<int> st; 
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && a[i] > a[st.top()]) {
            res[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    auto out = nextGreaterToRight(arr);
    for (int x : out) cout << x << " ";
    cout << '\n';
    return 0;
}
