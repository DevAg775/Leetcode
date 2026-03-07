class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=INT_MIN;
        int product =1;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            product = product*nums[i];
            maxproduct=max(product,maxproduct);
            if(product==0){
                product=1;
            }
        }
        
        product=1;
        for(int i=nums.size()-1;i>=0;i--){
            product = product*nums[i];
            maxproduct=max(product,maxproduct);
            if(product==0){
                product=1;
            }
        }
        return maxproduct;
    }
};