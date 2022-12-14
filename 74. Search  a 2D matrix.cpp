class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bottom = m-1;
        int row  = -1;
        
        
        
        while(top <=bottom){
            int mid =((top+bottom)/2);
            if(matrix[mid][0]== target) return true;
            else if(matrix[mid][0]<target && matrix[mid][n-1]>=target){ row = mid; break;}
            else if(matrix[mid][0]<target) {top = mid +1;}
            else 
                bottom = mid -1;
        }
        
        if(row!=-1){
            int left = 0;
            int right = n-1;
        
        while(left<=right){
            int mid = ((left+right)/2);
            if(matrix[row][mid]== target) return true;
            else if(matrix[row][mid]>target) right = mid -1;
            else left = mid +1;
        }
            return false;
        
        
            }
        else return false;
    }
};
