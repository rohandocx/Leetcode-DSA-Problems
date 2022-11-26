class Solution {
public:
    int dp[21][31];
    bool cal(int i, int j, string &s, string &p) {
        if(i == s.size() && j == p.size()) return true;
        if(dp[i][j] != -1) return dp[i][j];
        if(j == p.size()) return false;
        if(i == s.size()) {
            bool ans = false;
            if(j+1 < p.size() && p[j+1] == '*')
                ans = cal(i, j+2, s, p);
            else if(p[j] == '*')
                ans = cal(i, j+1, s, p);
            return dp[i][j] = ans;
        }
        
        bool ans = false;
        if(p[j] == '*') {
            ans = cal(i, j+1, s, p);
            if(p[j-1] == '.' || p[j-1] == s[i]) {
                ans = ans || cal(i+1, j, s, p);
            }
        } else {
            if(p[j] == '.' || p[j] == s[i]) {
                ans = cal(i+1, j+1, s, p);
            }
            if(j+1 < p.size() && p[j+1] == '*') {
                ans = ans || cal(i, j+1, s, p);
            }
        }
        return dp[i][j] = ans;
    }
    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return cal(0, 0, s, p);
    }
};
