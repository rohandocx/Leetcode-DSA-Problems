class Solution {
public:
    string addBinary(string a, string b) {
         int carry=0;
    
    int i=a.length()-1;
    int j=b.length()-1;
    
    string ans="";
    
    while(i>=0 || j>=0 || carry>0){
        
        int sum;
        sum=carry;
        
        if(i>=0){
            sum += a[i]-'0';
            i--;
        }
        
        if(j>=0){
            sum += b[j]-'0';
            j--;
        }
        
        carry = (sum>1)?1:0;
        
        sum = sum%2;
        
        ans.append(to_string(sum));
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}
    
};
