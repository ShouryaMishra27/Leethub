class Solution {
public:

    long long helperfunction(vector<int>& piles, int n, int speed)
    {
        long long k = 0;

        for(int i = 0; i < n; i++)
        {
            k += piles[i] / speed;

            if(piles[i] % speed != 0)
            {
                k++;
            }
        }

        return k;
    }

    int minEatingSpeed(vector<int>& piles, int h)
    {
        int n = piles.size();

        int low = 1;
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, piles[i]);
        }

        int high = maxi;
        int res = -1;

        while(low <= high)
        {
            int guess = low + (high - low) / 2;

            long long time = helperfunction(piles, n, guess);

            if(time > h)
            {
                low = guess + 1;
            }
            else
            {
                res = guess;
                high = guess - 1;
            }
        }

        return res;
    }
};