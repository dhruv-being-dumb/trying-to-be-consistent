class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> res;
        bool inserted =  false;
        int start = newInterval[0];
        int startsecond = newInterval[1];
        int i = 0;
        while(i<n){
            if(intervals[i][0] >= start and inserted == false){
                res.push_back({start , startsecond});
                inserted = true;
            }
            res.push_back(intervals[i]);
            i++;
        }
        if(inserted == false){
            res.push_back({start, startsecond});
        }

        vector<vector<int>> res2;

        int n2 = res.size();
        int start1 = res[0][0];
        int end1 = res[0][1];
        for(int i = 1; i<n2 ; i++){
            int start2 = res[i][0];
            int end2 = res[i][1];
            if(end1 >= start2){
                start1 = start1;
                end1 = max(end1 , end2);
            }else{
                res2.push_back({start1,end1});

                start1 = start2;
                end1 = end2;
            }
        }
        res2.push_back({start1 , end1});
        return res2;

    }
};