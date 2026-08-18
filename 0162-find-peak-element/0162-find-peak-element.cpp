class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        
        while(l<h){
            int m=l+(h-l)/2;
            if(m==n-1){
                if(nums[m]>nums[m-1]){
                    return m;
                }
                else h=m-1;
            }

            else if(m==0){
                if(nums[m]>nums[m+1]){
                    return m;
                }
                else l=m+1;
            }

            else if(nums[m]<nums[m+1]){
                l=m+1;
            }
            else if(nums[m]>nums[m+1]){
                h=m;
            }
            
        }
        return h;
        
    }
};