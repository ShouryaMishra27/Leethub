class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int orig=n;
        if(n<10)
        {
            return 0;
        }
        while(n>0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        int ans=orig-rev;
        return abs(ans);
        
    }
};