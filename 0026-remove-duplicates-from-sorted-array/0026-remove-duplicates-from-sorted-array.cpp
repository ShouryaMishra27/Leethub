class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n == 0)
            return 0;

        int count = 1;
        int i = 1;
        int j = 1;

        while(j < n)
        {
            while(j < n && nums[j] == nums[j-1])
            {
                j++;
            }

            if(j >= n)
                break;

            nums[i] = nums[j];
            count++;
            i++;
            j++;
        }

        return count;
    }
};