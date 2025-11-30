#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

bool isValidBrackets(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') st.push(')');
        else if (c == '[') st.push(']');
        else if (c == '{') st.push('}');
        else {
            if (st.empty() || st.top() != c) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    vector<string> tests = {"()", "()[]{}", "(]", "([)]", "{[]}"};
    for (auto &t : tests) cout << t << " -> " << (isValidBrackets(t) ? "Valid" : "Invalid") << '\n';
    return 0;
}
