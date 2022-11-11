//48 rotate image
//level:medium
//approach: 1. transpose of matrix
//            2. swapping of columns

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //transpose of matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j)
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //swapping the columns
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++)
            swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
};
