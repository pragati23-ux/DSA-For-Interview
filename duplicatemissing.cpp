#include<bits/stdc++.h>
using namespace std;

pair<int, int> findDuplicateAndMissing(const vector<int>& nums) {
    unordered_set<int> seen;
    long long actualSum = 0;
    int dup = -1;
    int n = nums.size();

    for (int x : nums) {
        actualSum += x;
        if (seen.count(x)) {
            dup = x;
        } else {
            seen.insert(x);
        }
    }

    long long expectedSum = 1LL * n * (n + 1) / 2;
    int missing = expectedSum - (actualSum - dup);

    return {dup, missing};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    pair<int, int> result = findDuplicateAndMissing(nums);
    int dup = result.first;
    int missing = result.second;

    cout << "Duplicate: " << dup << "\n";
    cout << "Missing: " << missing << "\n";

    return 0;
}