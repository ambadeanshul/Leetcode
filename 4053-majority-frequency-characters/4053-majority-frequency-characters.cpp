class Solution {
public:
    string majorityFrequencyGroup(string s) {
        string ans="";
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        map<int,string> groups;
        for(auto it:m){
            char ch=it.first;
            int freq=it.second;

            groups[freq]=groups[freq]+ch;

        }

        int maxSize = 0;
        int maxFreq = 0;

        for(auto it : groups) {
            int freq = it.first;
            string group = it.second;

            if(group.size()>maxSize ||
               (group.size()==maxSize && freq>maxFreq)) {

                ans=group;
                maxSize=group.size();
                maxFreq=freq;
            }
        }
        return ans;

    }
};