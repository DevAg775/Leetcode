class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
       int rows = nums.size();   //size of row
       int cols = nums[0].size();  // size of col


       //sort each row
       for(int i = 0 ; i < rows ; i++){
        sort(nums[i].begin(),nums[i].end());
       }

       int score = 0;
       for(int j = 0 ; j < cols ; j++){
        int maxi =  0;
        for(int i = 0 ; i<rows;i++){
            maxi = max(maxi,nums[i][j]);
        }
            score= score+maxi; 
       }
       return score;
    }
};