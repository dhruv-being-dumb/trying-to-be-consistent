class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2){
            return n;
        }
        int uniq = 2;
        int i = 2;
        while(i<n){
            if(nums [ uniq-2 ] == nums[i]){//agar same hai i.e. duplicate
                i++;
                continue;
            }
            //found a unique elemnt
            nums[uniq] = nums[i];
            uniq ++;
            i++;

        }
        return uniq;
        
    }
};