class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int i = 0;
        int j = 0;
        int k = n;
        while( i < 2*n && j< 2*n){
            ans[i] = nums[j];
            ans[i+1] = nums[k];
            i = i+2;
            j++;
            k++;
            
        }
        return ans;
    }
};