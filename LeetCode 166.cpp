class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        string ans;
        long long x=numerator,y=denominator;
        if(x%y==0) return to_string(x/y);
        if((x<0)^(y<0)) ans+='-';
        x=abs(x),y=abs(y);
        ans+=to_string(x/y)+'.';
        x=x%y;
        unordered_map<long long ,int> hash;
        while(x)
        {
            hash[x]=ans.size();
            x*=10;
            ans+=to_string(x/y);
            x%=y;
            if(hash.count(x))
            {
                ans=ans.substr(0,hash[x])+"("+ans.substr(hash[x],ans.size())+")";
                break;
            } 
        }
        return ans;
    }
};