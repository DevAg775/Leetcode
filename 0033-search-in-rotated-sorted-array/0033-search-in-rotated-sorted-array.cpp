class Solution {
public:
    int search(vector<int>& nums, int target) {
     int n = nums.size();
    int s = 0;
    int e = n-1;
    int mid = 0;
    int ans = 2;
    
    while(s<=e){
        mid = (s+e)/2;
        
        if(nums[mid]==target){
            ans = mid;
            return ans;
        }
        if(nums[s] <= nums[mid]) { // left sorted
            if(target >= nums[s] && target < nums[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        else { // right sorted
            if(target > nums[mid] && target <= nums[e])
             s = mid + 1;
            else
             e = mid - 1;
        }
    }
  return -1;
    } 
};