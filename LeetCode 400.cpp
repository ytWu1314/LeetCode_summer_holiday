class Solution {
public:
    int findNthDigit(int n) {
        long long  k=1,t=9,s=1;
        while(n>k*t) //求得n属于k位数
        {
            n-=k*t;
            k++;
            t*=10;
            s*=10;
        }

        s+=(n+k-1)/k-1;  //n为k位数的第s位

        n=n%k?n%k:k; //第n位

        return to_string(s)[n-1]-'0';
    }
};