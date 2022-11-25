class Solution {
public:
    string longestPalindrome(string s) {
        int max1,max2;
        int maximum=0;
        for(int i=0;i<s.size();i++){
            int temp=1;
            int left=i-1,right=i+1;
            for(;left>=0 && right<s.size();left--,right++){
                if(s[left]==s[right])
                    temp+=2;
                else
                    break;
            }
            if(temp>maximum){
                max1=left+1,max2=right-1;
                maximum=temp;
            }
        }
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                int temp=2;
                int left=i-2,right=i+1;
                for(;left>=0 && right<s.size();left--,right++){
                    if(s[left]==s[right])
                        temp+=2;
                    else
                        break;
                }
                if(temp>maximum){
                    max1=left+1,max2=right-1;
                    maximum=temp;
                }
            }
        }
        string answer=s.substr(max1,maximum);
        return answer;
    }
};
