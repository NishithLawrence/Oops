#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int>& a, int target) {
    unordered_map<int,int> seen; 
    for (int i = 0; i < (int)a.size(); ++i) {
        int need = target - a[i];
        auto it = seen.find(need);
        if (it != seen.end()) {
            return {it->second, i};
        }
        seen[a[i]] = i;
    }
    return {};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    auto res = twoSum(arr, target);
    if (!res.empty()) cout << "Indices: " << res[0] << ", " << res[1] << '\n';
    else cout << "No pair found\n";
    return 0;
}
