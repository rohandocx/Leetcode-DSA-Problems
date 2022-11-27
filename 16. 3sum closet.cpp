class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
sort(nums.begin(),nums.end());
int ans;
int diff=INT_MAX;
int n=nums.size();

    for(int i=0;i<n-2;i++)
    {
        
        if(i>0 && nums[i]==nums[i-1]) continue;
        
        int start=i+1;
        int end=n-1;
        
        
        while(start<end)
        {
        int sum=nums[i]+nums[start]+nums[end];
        if(sum==target)
        {
            return target;
        }
            
      else if(sum>target)
        {
            if(abs(sum-target)<diff)
            {
               
                ans=sum;
                 diff=abs(sum-target);
            }
            end--;
        }
                        
       else
        {
            if(abs(sum-target)<diff)
            {
               
                ans=sum;
                 diff=abs(sum-target);
            }
            start++;
        } 
    }
    }
    
    return ans;
}
