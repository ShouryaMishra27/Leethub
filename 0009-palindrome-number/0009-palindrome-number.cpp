class Solution {
public:
    bool isPalindrome(int x) {
        long long rev_num=0;
        int flag=0;
        int original=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            int rem=x%10;
            rev_num=(rev_num*10)+rem;
            x/=10;
        }
        if(rev_num==original)
        {
            return true;
        }

        else{
            return false;
        }


        
    }
};