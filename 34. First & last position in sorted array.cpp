class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int left = -1, right = -1;
        
       while(l<=r){
           int mid = (l+r)/2;
           if(target == nums[mid]) left = mid , r = mid-1;
           else if(target < nums[mid])   r = mid - 1;
           else l = mid + 1;
       }
        
        l = 0, r = n -1; 
        while(l<=r){
            int mid = (l+r)/2;
            if(target == nums[mid]) right = mid , l = mid +1;
           else if(target < nums[mid])   r = mid - 1;
           else l = mid + 1;
       }
            
        return {left, right};
    }
};
