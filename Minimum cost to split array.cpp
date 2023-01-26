
class Solution
{
public:
    int minCost(vector<int> &nums, int k)
    {

        int s = nums.size();

        vector<vector<long long>> f(s, vector<long long>(s, 0));

        for (int i = 0; i < s; i++)
        {

            vector<int> mp(s, 0);
            int m = 0;
            for (int j = i; j < s; j++)
            {
                if (mp[nums[j]] == 0)
                {
                }
                else if ((mp[nums[j]]) == 1)      m += 2;
                else
                {      m++;
                }
                mp[nums[j]]++;

                f[i][j] = m;
            }
        }

        vector<long long> dpi(s + 1, LLONG_MAX);

        dpi[0] = 0;
        dpi[1] = f[0][0] + k;

        for (int i = 2; i <= s; i++)
        {

            dpi[i] = f[0][i - 1] + k;
            for (int j = i - 1; j >= 1; j--)
            {
                dpi[i] = min(dpi[i], dpi[j] + f[j][i - 1] + k);
            }
        }
        return dpi[s];
    }
};
