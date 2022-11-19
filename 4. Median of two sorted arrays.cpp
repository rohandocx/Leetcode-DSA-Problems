class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
          int i=0,j=0;
        vector<int>v;
        int n=arr1.size(),m=arr2.size();
        while(i<n||j<m){
            if(i<n &&j<m&&arr1[i]<=arr2[j]){
                v.push_back(arr1[i]);
                i++;
            }
             else if(i<n &&j<m&&arr1[i]>arr2[j]){
                v.push_back(arr2[j]);
                j++;
            }
            else if(i<n){
                v.push_back(arr1[i]);
                i++;
            }
               else if(j<m){
                v.push_back(arr2[j]);
                j++;
            }
        }
        if(v.size()==0)return 0;
        if(v.size()%2==0){
            return (double)((double)v[v.size()/2-1]+(double)v[v.size()/2])/2;
        }
        return (double)v[v.size()/2];
    }
};
