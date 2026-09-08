class Solution {
public:
int totalFruit(vector<int>& a) {
        int n=a.size();
        int low=0;
        int high=0;
        int len=0;
        unordered_map<int,int>freq;
        while(high<n)
        {
            freq[a[high]]++;
            while(freq.size()>2)
            {
                freq[a[low]]--;
                if(freq[a[low]]==0)
                {
                    freq.erase(a[low]);
                }
                low++;
            } 
            len=max(len,high-low+1);
            high++;
        }
        return len;
   }

};