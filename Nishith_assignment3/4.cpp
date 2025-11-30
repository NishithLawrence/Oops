#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> slidingWindowMax(const vector<int>& a, int k) {
    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < (int)a.size(); ++i) {
        // remove indices out of window
        if (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        // remove smaller elements from back
        while (!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) ans.push_back(a[dq.front()]);
    }
    return ans;
}

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    auto res = slidingWindowMax(nums, k);
    for (int v : res) cout << v << " ";
    cout << '\n';
    return 0;
}
