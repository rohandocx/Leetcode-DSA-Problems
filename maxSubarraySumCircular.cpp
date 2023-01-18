class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {    
      int n=arr.size();
      int maxi=arr[0];
      int mini=arr[0];
      int sum =arr[0];
      int sum2=arr[0];
      int tot=accumulate(arr.begin(),arr.end(),0);
       for(int i=1;i<n;i++){
            if(sum<0)sum=arr[i];
            else sum +=arr[i];
            if(sum2>0)sum2=arr[i];
            else sum2 +=arr[i];
            maxi=max(sum,maxi);
            mini=min(mini,sum2);
       }
       return (tot==mini)? maxi: max(tot-mini,maxi);
    }
};
