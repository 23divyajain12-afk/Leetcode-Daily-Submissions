class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
        for(int &i:arr1){
            bool flag=true;
            for(int &j:arr2){
                if(abs(i-j)<=d){
                    flag= false;
                    break;
                }
                
            }
            if(flag==true) cnt++;
        }
        return cnt;
    }
};