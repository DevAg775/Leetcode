class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n - 1;
        int endingCol = m - 1;

        vector<int> ans;

        while(startingRow <= endingRow && startingCol <= endingCol) {

            // 1. Left to Right
            for(int col = startingCol; col <= endingCol; col++) {
                ans.push_back(matrix[startingRow][col]);
            }
            startingRow++;

            // 2. Top to Bottom
            for(int row = startingRow; row <= endingRow; row++) {
                ans.push_back(matrix[row][endingCol]);
            }
            endingCol--;

            // 3. Right to Left (check row still valid)
            if(startingRow <= endingRow) {
                for(int col = endingCol; col >= startingCol; col--) {
                    ans.push_back(matrix[endingRow][col]);
                }
                endingRow--;
            }

            // 4. Bottom to Top (check col still valid)
            if(startingCol <= endingCol) {
                for(int row = endingRow; row >= startingRow; row--) {
                    ans.push_back(matrix[row][startingCol]);
                }
                startingCol++;
            }
        }

        return ans;
    }
};
