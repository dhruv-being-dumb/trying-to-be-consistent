class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> f(2, 0);
        int n = nums.size();
        int res = INT_MIN;
        int low = 0;
        int high = 0;
        for(high = 0; high< n; high++){
            f[nums[high]]++;
            int len = high - low + 1;
            int maxcount = f[1];
            int diff = len - maxcount;
            while( diff > k ){
                f[nums[low]]--;
                low++;
                len = high - low + 1;
                maxcount = f[1];
                diff = len - maxcount;
            }
            len = high - low +1;
            res = max(res , len);
        }
        return res;
    }
};