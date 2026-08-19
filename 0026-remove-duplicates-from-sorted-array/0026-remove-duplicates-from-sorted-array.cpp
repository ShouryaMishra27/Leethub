class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=1;
        int k=1;
        while(high<n)
        {
            if(nums[high]==nums[high-1])
            {
                high++;
                continue;
            }
            low++;
            nums[low]=nums[high];
            k++;
            high++;
        }
        return k;
        
    }
};