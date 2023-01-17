class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.length();
        int zero =0;
        int one =0;

        for(int i= 0; i<n; i++){
            if(s[i] == '0'){zero++;}
            else{one++;}
        }
          int mini = min(zero,one);


        if(zero > one){
            mini = min(mini, zero -one);
        }

        if(zero == one){
            
             mini = mini-1;}

        
        else if(one > zero){
            mini = min(mini, one-zero) ;
        }

    return mini;
    }
};
