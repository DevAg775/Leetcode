
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         // Your logic will go here.
//         int n = nums.size();
//         int i = 0 ;
//         int j = i+1;
//         while(i < n && j<=n){
//                 int first = nums[i];
//                 int second = nums[j];
//                 int sum = first +second;
//                 if(sum == target){
//                     return {i,j};
//                 }
//                 i++;
//         }
//         return {};
//     }
// };



//optimized way

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Your logic will go here.
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){
                return{mp[need],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};