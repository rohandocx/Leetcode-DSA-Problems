class Solution {
public:
    bool isPalindrome(int x) {
       
         int digit;
          int z = x;
         long int num = 0;
         if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        while(x>0){       
           digit = x % 10;
        num = num *10 + digit;
            x = x/10;
            
        }
      if(z==num){
          return true; 
      }
        else 
            return false;
         
        
    }
};
