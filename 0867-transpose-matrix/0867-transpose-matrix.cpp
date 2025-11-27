class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int nrows = cols;
        int ncols = rows;
        vector<vector<int>> transposematrix(nrows,vector<int>(ncols,0));
        for(int i = 0 ; i < ncols ; i++){
            for(int j = 0 ; j < nrows ; j++){
                  transposematrix[j][i]=matrix[i][j];
            }
        }
        return transposematrix;
    }
};