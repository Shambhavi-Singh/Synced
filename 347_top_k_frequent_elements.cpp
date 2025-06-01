class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1)
            return nums;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        vector<pair<int, int>> vecPair(m.begin(), m.end());
        sort(vecPair.begin(), vecPair.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });
        vector<int> ans;
        for (auto i : vecPair) {
            ans.push_back(i.first);
            if (ans.size() == k)
                break;
        }
        return ans;
    }
};