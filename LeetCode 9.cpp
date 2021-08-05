class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long res=0;
        int y=x;
        while(x)
        {
            res=res*10+x%10;
            x/=10;
        }
        return y==res;
    }
};