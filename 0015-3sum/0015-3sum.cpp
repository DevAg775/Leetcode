//Bruteforce apporach but not optimal takes O(n^3) T.C.
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());

//         for(int i= 0 ;i<n;i++){
//             if(i>0&&nums[i]==nums[i-1]){
//                 continue;
//             }
//             for(int j = i+1;j<n;j++){
//                  if(j>i+1&&nums[j]==nums[j-1]){
//                     continue;
//                  }
//                 for(int k = j+1;k<n;k++){
//                      if(k>j+1&&nums[k]==nums[k-1]){
//                         continue;
//                      }
//                     if(nums[i]+nums[j]+nums[k]==0){
//                       ans.push_back({nums[i],nums[j],nums[k]});
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };


//Optimal Approach
class Solution {
public:
    vector<vector<int>> ans;
    
    void twoSum(vector<int>& nums , int target ,int i, int j){
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else {
                while(i<j&&nums[i] == nums[i+1]) i++;
                while(i<j&&nums[j] == nums[j-1]) j--;
                ans.push_back({-target,nums[i],nums[j]});
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();

    if(n<3)return{};
    ans.clear();
    sort(nums.begin(),nums.end());

    for(int i = 0 ; i< n-2;i++){
        if(i>0 &&nums[i]==nums[i-1]){
            continue;
        }
        int n1 = nums[i];
        int target = -n1;

        twoSum(nums, target , i+1,n-1);// it will find n2 and n3
    }
    return ans;
    }
};