class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            int a=arr[m]-(m+1);
            if(a<k) l=m+1;
            else h=m-1;
        }
        return l+k;
        
        
    }
};