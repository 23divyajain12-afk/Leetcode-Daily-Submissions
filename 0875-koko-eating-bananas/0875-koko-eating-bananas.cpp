class Solution {
public:
    long long total_t(vector<int>&piles, int n, int h){
    long long total=0;
    for(int i : piles){
        total+= (i+n-1)/n;
        if(total>h) return total;
    }
    return total;
}

int minEatingSpeed(vector<int>& piles, int h) {
    if(h<piles.size()) return -1;
    int low =1, high= *(max_element(piles.begin(), piles.end()));
    while(low<=high){
        int mid = low + (high-low)/2;
        if(total_t(piles, mid, h)<=h){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
};