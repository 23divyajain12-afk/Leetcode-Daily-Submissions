class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi =0;
        for(auto i : sentences){
            int cur=0;
            for(auto j:i) if(j==' ') cur++;
            maxi = max(cur, maxi);
        }
        return maxi+1;
    }
};