class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        int low=0;
        int high=n-1;
        int target;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<nums[mid+1])
            {
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};