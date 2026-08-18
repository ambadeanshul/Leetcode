class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        
        
        int index=-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){ 
                index=m;
                break;
                }
            if(nums[m]<target) l=m+1;
            else h=m-1;
        }
        if(index==-1){
            return {-1,-1};
        }
        int first=index;
        int second=index;
        l=0;
        h=index-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                first=m;
                h=m-1;
            }
            else if(nums[m]<target) l=m+1;
            else h=m-1;
        }

        l=index+1;
        h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                second=m;
                l=m+1;
            }
            else if(nums[m]<target) l=m+1;
            else h=m-1;
        }
        return {first,second};
    }
};