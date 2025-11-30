#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int,int>> mergeIntervals(vector<pair<int,int>>& intervals) {
    if (intervals.empty()) return {};
    sort(intervals.begin(), intervals.end());
    vector<pair<int,int>> ans;
    pair<int,int> cur = intervals[0];
    for (size_t i = 1; i < intervals.size(); ++i) {
        auto &it = intervals[i];
        if (it.first <= cur.second) {
            cur.second = max(cur.second, it.second);
        } else {
            ans.push_back(cur);
            cur = it;
        }
    }
    ans.push_back(cur);
    return ans;
}

int main() {
    vector<pair<int,int>> v = {{1,3},{2,6},{8,10},{15,18}};
    auto merged = mergeIntervals(v);
    for (auto &p : merged) cout << "[" << p.first << "," << p.second << "] ";
    cout << '\n';
    return 0;
}
