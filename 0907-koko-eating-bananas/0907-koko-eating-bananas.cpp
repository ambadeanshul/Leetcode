class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=piles[0];
        for(int i=1;i<n;i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        
        int l=1;
        int r=max;
        while(l<=r){
            int m=l+(r-l)/2;
            long long hours=0;
            for(int i=0;i<n;i++){
                hours=hours+(piles[i]+(long long)m-1)/m;
            }
            if(hours<=h){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return l;
        
        
    }
};