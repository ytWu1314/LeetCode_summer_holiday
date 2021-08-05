class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        
        for(int i=2;i<=n;i++)
        {
            int cnt=0;
            string temp="";
            for(int j=0;j<s.size();j++)
            {
                cnt++;
                if(j==s.size()-1||s[j]!=s[j+1])
                {
                    temp+=to_string(cnt)+s[j];
                    cnt=0;
                } 
            }
            s=temp;
        }
        return s;
    }
};