class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int len = s.length() - 1;
        int count = 0;
        int i;
        
		
        for(i=len; i>=0; i--){
		
           
            if(s[i] == ' ' && count > 0){
                break;
            }
			
           
            if(s[i] != ' '){
                count++;
                continue;
            }
            
            
            if(s[i] == ' ' && count == 0){
                continue;
            }
			
        }
        
        return count;
    }
};
