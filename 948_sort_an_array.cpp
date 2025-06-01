class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // using STL's stable_sort
        stable_sort(nums.begin(), nums.end());
        return nums;
    }
};