class Solution {
public:
    int reverse(int x) {
        long long r=0;
        while(x)
        {
            r=r*10+x%10;
            x/=10;
        }
        if(r>INT_MAX) return 0;
        if(r<INT_MIN) return 0;
        return r;
    }
};