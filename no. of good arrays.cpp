class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long m = nums.size();
        long long current = 0;
        long long result = 0;
        long long left = 0;
        unordered_map<int, int> map;
        
        for (int r = 0; r < m; r++) {
            if (map[nums[r]] > 0) {
                current += map[nums[r]];}
            map[nums[r]]++;
            while (left <= r && current >= k) {
                if (map[nums[left]] > 1) {
                current -= (map[nums[left]] - 1);}
                map[nums[left]]--;
                left++;}
            result += (r - left + 1);}
        
        return (m * (m + 1) / 2) - result;
    }
};
