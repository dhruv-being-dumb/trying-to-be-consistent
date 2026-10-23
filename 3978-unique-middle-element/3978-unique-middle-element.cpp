class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        int middle = nums[m];
        int count = 0;

        for(int i = 0; i < n ; i++){
            if (nums[i] == middle){
                count++;
            }
        }
        if (count >= 2){
            return false;
        }else
        return true;
    }
};