class Solution {
public:
    int myAtoi(string s) {
        int k=0;
        while(k<s.size()&&s[k]==' ') k++;
        if(k==s.size()) return 0;
        int m=1;
        if(s[k]=='-') m=-1,k++;
        else if(s[k]=='+') m=1,k++;
        long long ans=0;
        while(k<s.size()&&s[k]<='9'&&s[k]>='0')
        {
            ans=ans*10+s[k]-'0';
            k++;
            if(ans>INT_MAX) break;
        }
        ans=ans*m;
        if(ans>INT_MAX) return INT_MAX;
        if(ans<INT_MIN) return INT_MIN;
        return ans;
    }
};