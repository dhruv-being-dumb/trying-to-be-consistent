class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxending = nums[0];
        int minending = nums[0];
        int result = nums[0];
        for(int i = 1; i<n ; i++){
            int v1 = nums[i];
            int v2 = nums[i]*maxending;
            int v3 = nums[i]*minending;
            maxending = max( v1 , max(v2 , v3));
            minending = min( v1 , min(v2 , v3));
            result = max(result , max(maxending , minending));
        }
        return result;
        
    }
};