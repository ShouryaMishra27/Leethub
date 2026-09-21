class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int low=0;
        int high=0;
        int len=INT_MIN;
        unordered_map<char,int>freq;
        while(high<=n)
        {
            freq[s[high]]++;
            while(freq[s[high]]!=1)
            {
                freq[s[low]]--;
                if(freq[s[low]]==0)
                {
                    freq.erase(s[low]);
                }
                low++;

                len=max(len,high-low+1);
            }
            high++;
            len=max(len,high-low-1);


        }
        if(len==INT_MIN)
        {
            return -1;
        }
        else
        {
            return len;
        }
    }
};