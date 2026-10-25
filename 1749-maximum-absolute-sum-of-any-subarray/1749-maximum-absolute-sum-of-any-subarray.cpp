class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int highending = nums[0];
        int lowending = nums[0];
        int result = abs(nums[0]);
        for ( int i= 1 ; i<n ; i++){
            highending = max(nums[i] + highending , nums[i]);
            lowending = min(nums[i] + lowending , nums[i]);
            result = max( result , max(highending , abs(lowending)));
        }
        return result;
        
    }
};