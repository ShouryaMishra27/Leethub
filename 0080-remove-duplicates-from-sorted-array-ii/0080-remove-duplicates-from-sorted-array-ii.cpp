class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2)
            return n;

        int high = 0;
        int low = 0;
        int count = 0;

        while (high < n) {

            // New number -> reset count
            if (high == 0 || nums[high] != nums[high - 1])
                count = 1;
            else
                count++;

            // Keep only first 2 occurrences
            if (count <= 2) {
                nums[low] = nums[high];
                low++;
            }

            high++;
        }

        return low;
    }
};