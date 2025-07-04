#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    for (int i = 0; i < nums.size(); ++i) {
        int need = target - nums[i];
        if (m.count(need)) return {m[need], i};
        m[nums[i]] = i;
    }
    return {};
}
