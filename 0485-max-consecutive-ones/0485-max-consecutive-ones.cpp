class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int high=0;
        int low=0;
        int len=INT_MIN;
        while(high<n)
        {
            if(nums[low]==0 && nums[high]==0)
            {
                low++;
                high++;
            }
            else if(nums[high]==1)
            {
                len=max(len,high-low+1);
                if(high>=n)
                {
                    break;
                }
                high++;
            }
            else if(nums[high]==0)
            {
                low=high;
                if(low>=n && high>=n){
                    break;
                }
                low++;
                high++;
            }
        }
        if(len==INT_MIN)
        {
            return 0;
        }
        else{
            return len;
        }
        
    }
};