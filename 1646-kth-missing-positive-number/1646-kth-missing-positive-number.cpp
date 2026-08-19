class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max) max=arr[i];
        }
        vector<int> v(max+k+1,0);
        for(int i=0;i<n;i++){
            v[arr[i]]=1;
        }
        int count=1;
        int index;
        for(int i=1;i<v.size();i++){
            if(v[i]==0){
                count++;
                index=i;

            }
            if(count>k) break;
        }
        return index;
        
        
    }
};