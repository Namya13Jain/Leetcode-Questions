//54 Spiral matrix
//level:medium
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n=matrix[0].size();
        int totalElements= m*n;
        int row_start=0,row_end=m-1,col_start=0,col_end=n-1;
        vector<int> ans;
        int i,j;
        while(totalElements>0)
        {
            //from left to right(loop1)
            for( j=col_start;j<=col_end;j++){
                ans.push_back(matrix[row_start][j]);
                totalElements--;
            }
            row_start++;
            if(totalElements<=0) break;

            //from top to bottom(loop2)
            for( i=row_start;i<=row_end;i++){
                ans.push_back(matrix[i][col_end]);
                totalElements--;
            }
            col_end--;
            if(totalElements<=0) break;

            //from right to left
            for(j=col_end;j>=col_start;j--){
                 ans.push_back(matrix[row_end][j]);
                 totalElements--;
            }
            row_end--;
            if(totalElements<=0) break;

            //from bottom to top
            for( i=row_end;i>=row_start;i--){
                ans.push_back(matrix[i][col_start]);
                totalElements--;
            }
            col_start++;
            if(totalElements<=0) break;
        }
        return ans;
    }
};
