class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> f;
        int low = 0;
        int high = 0 ;
        int result = 0;
        int n = s.size();
        int len = 0;


        for(high = 0; high < n ; high++){
            f[s[high]]++;
            int length = high - low + 1;
            while( f.size() < length){ 
                f[s[low]]--;
                if(f[s[low]]== 0 ){
                    f.erase(s[low]);
                }
                low++;
                length = high - low +1;
            }
            len = high - low +1;
            result = max(result , len);
        }
        return result;
    }
};