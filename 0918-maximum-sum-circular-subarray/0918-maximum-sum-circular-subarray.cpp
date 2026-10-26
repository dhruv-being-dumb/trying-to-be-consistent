class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int arrsum = nums[0];
        int minending = nums[0];
        int minresult = nums[0];
        int maxending = nums[0];
        int maxresult = nums[0];
        int result = nums[0];
        for( int i = 1; i < n ; i++){
            minending = min(minending + nums[i] , nums[i] );
            minresult = min(minending , minresult);
            maxending = max(maxending + nums[i] , nums[i]);
            maxresult = max(maxresult , maxending);
            arrsum = arrsum + nums[i];
        }
        if (maxresult < 0){
            return maxresult;
        }

        int arrminusneg = arrsum - minresult;
        result = max(maxresult , arrminusneg);
        return result;
        
    }
};