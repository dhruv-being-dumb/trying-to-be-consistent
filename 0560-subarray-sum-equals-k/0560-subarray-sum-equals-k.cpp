class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        unordered_map <int , int > f;
        f[0] = 1;
        int res = 0;
        for(int i = 0 ; i  < n ; i++){
            sum = sum + nums[i];
            int question = sum -k ;
            int freq = f[question];
            res = res + freq;
            f[sum]++; 
        }
        return res;
    }
};