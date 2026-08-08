class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> su(begin(nums) , end(nums));
        return su.size() < nums.size();
    }
};