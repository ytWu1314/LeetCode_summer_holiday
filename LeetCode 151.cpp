class Solution {
public:
    string reverseWords(string s) {
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ') continue;
            int j=i,t=k; //双指针算法 i和j  t和k 
            while(j<s.size()&&s[j]!=' ') s[t++]=s[j++];
            reverse(s.begin()+k,s.begin()+t);
            s[t++]=' ';
            i=j,k=t;
        }
        if(k) k--; //去掉最后一个单词添加的空格
        s.erase(s.begin()+k,s.end()); //去掉多余的空格
        reverse(s.begin(),s.end());
        return s;
    }
};
