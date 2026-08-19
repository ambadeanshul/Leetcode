class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+weights[i];
        }
        int max=0;
        for(int i=0;i<n;i++){
            if(weights[i]>max) max=weights[i];
        }

        int low=max;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int s=0;
            int count=1;
            for(int i=0;i<n;i++){
                s=s+weights[i];
                if(s>mid){
                    count++;
                    s=weights[i];
                    
                }
               
            }
            if(count<=days){
                high=mid-1;
            }
            else low=mid+1;

        }
        return low;
    }
};