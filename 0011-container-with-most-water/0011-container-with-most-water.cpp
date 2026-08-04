class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        vector<long long> a;
        while(left<right){
            int w=right-left;
            int l=min(height[left],height[right]);
            if(height[left]<=height[right]){
                left++;
            }
            else right--;
            a.push_back(w*l);
        }
        long long max=a[0];
        for(int i=0;i<a.size();i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        return max;
    }
};