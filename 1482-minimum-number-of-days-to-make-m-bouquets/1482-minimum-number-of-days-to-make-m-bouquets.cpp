class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int low = *(min_element(bloomDay.begin(), bloomDay.end()));
        int high = *(max_element(bloomDay.begin(), bloomDay.end()));
        while(low<=high){
            int mid = low + (high - low)/2;
            int cur_cnt = 0, cnt=0;
            for(int i:bloomDay){
                if(i<=mid) cur_cnt++;
                else{
                    cnt+= cur_cnt/k;
                    cur_cnt = 0;
                }
            }
            cnt+=cur_cnt/k;
            if(cnt>=m){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};