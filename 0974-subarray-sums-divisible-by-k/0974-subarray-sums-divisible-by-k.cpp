class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>f;
        f[0]=1;
        int sum=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int ques=sum%k;
            if(ques<0)
            {
                ques=ques+k;
            }
            int freq=f[ques];
            res+=freq;
            f[ques]++;
        }
        return res;
        
    }
};