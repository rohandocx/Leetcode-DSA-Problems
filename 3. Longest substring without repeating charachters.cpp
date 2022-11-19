class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
       
        map<char,int> cnt;
        int n = s.length();
        int i(0),j(0);
        
        
        if(n==0){
            return 0;
        }
        
        
        for(char c : s){
            cnt[c] = 0;
        }
      
       
        cnt[s[0]] = 1;
    
        int maxLen =1;
        
   
        while(j!=n-1){
            
            
            if(cnt[s[j+1]]==0){
                j++;
                cnt[s[j]] = 1;
                maxLen = max(maxLen,j-i+1);
                
            }    
            
            else{
                cnt[s[i]]--;
                i++;    
            }
            
        }
        return maxLen;
    }
};
