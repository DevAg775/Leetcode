class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        auto it = unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());

        int m = nums.size();
        return m;
    }
};