class Solution {
public:
    double myPow(double x, long int n) {
        
        double res;
        
        if(n<0){
            n=n*-1;
            
            res = pow(x,n);
            return 1/res;
        }
        
        
            
            
        
        else {
            
        res = pow(x,n);
            
        return  res;
        }
    
    
    
    }
};
