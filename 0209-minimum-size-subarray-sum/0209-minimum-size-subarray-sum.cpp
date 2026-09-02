class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int high=0;
        int low=0;
        int sum=0;
        int len=INT_MAX;
        while(high<n)
        {
            sum+=nums[high];
            while(sum>=target)
            {
                sum-=nums[low];
                len=min(len,high-low+1);
                low++;
                
            }
            high++;
        }
        if(len==INT_MAX)
        {
            return 0;
        }
        else{
            return len;
        }
        

        
    }
};