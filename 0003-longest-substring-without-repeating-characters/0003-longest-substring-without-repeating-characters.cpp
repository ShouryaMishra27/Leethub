class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int high=0;
        int low=0;
        int len=INT_MIN;
        while(high<n)
        {
            mp[s[high]]++;
            while(mp[s[high]]>1)
            {
                mp[s[low]]--;
                low++;
            }
            if(mp[s[high]]==1){
                len=max(len,high-low+1);
            }
            high++;
        }
        if(len==INT_MIN)
        {
            return 0;
        }else{
            return len;
        }
    }
};