class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans={};
        sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);
    for(int i=0;i<intervals.size();i++){
        int flag=0;
        for (int j = 0; j < ans.size(); j++)
        {
            if(!(intervals[i][0]>ans[j][1] || intervals[i][1]<ans[j][0])){
                ans[j][0] = min(ans[j][0], intervals[i][0]);
                ans[j][1] = max(ans[j][1], intervals[i][1]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            ans.push_back(intervals[i]);
        } 
    }
    return ans;
    }
};