class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        unordered_map <int , int > f;
        f[0] = 1;
        for( int i = 0 ; i< n ; i++){
            sum = sum + nums[i];
            int remainder = sum%k;
            if( remainder < 0){
                remainder += k;
            }
            ans = ans + f[remainder];
                f[remainder]++;
        }
        return ans;

         
        
    }
};