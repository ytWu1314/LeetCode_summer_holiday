class Solution {
public:
    string convert(string s, int r) {
        if(r==1) return s;
        string ans;
        int k;
        int j;
        for(int i=0;i<r;i++)
        {
            k=i;
            j=2*r-2-i;    
            if(i==0||i==r-1)
            {
                while(k<s.size())
                {
                    ans+=s[k];
                    k+=2*r-2;
                }
            }
            else {
                while(k<s.size()||j<s.size())
                {
                    if(k<s.size())
                    ans+=s[k];
                    k+=2*r-2;
                    if(j<s.size())
                    ans+=s[j];
                    j+=2*r-2;
                }
            }
        }  
        return ans;

    }
};