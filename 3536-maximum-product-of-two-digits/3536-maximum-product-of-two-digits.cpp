class Solution {
public:
    int maxProduct(int n) {
        string str=to_string(n);
        sort(str.begin(),str.end());
        reverse(str.begin(),str.end());
        int m=str.size();
        int prod=((str[0]-'0')*(str[1]-'0'));
        return prod;

    }
};