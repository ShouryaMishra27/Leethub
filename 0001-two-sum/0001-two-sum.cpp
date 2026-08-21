class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int left=0;
        int right=arr.size()-1;
        while(left<right)
        {
            if(arr[left].first+arr[right].first==target)
            {
                return {arr[left].second,arr[right].second};
            }
            else if(arr[left].first+arr[right].first>target)
            {
                right--;
            }
            else{
                left++;
            }
        }
        return {};

    }
};