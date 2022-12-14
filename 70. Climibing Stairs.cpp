class Solution {
public:
    int climbStairs(int n) {
      long long int memo[46];
        memo[1] =1;
        memo[2] =2;
        memo[3] = 3;
        for(int i = 4; i<46 ;i++){
            memo [i] = memo[i-1] + memo[i-2];
        }
        return memo[n];
    }
};
