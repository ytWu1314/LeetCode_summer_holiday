class Solution {
public:
    string reverseWords(string s) {
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ') continue;
            int j=i,t=k; //˫ָ���㷨 i��j  t��k 
            while(j<s.size()&&s[j]!=' ') s[t++]=s[j++];
            reverse(s.begin()+k,s.begin()+t);
            s[t++]=' ';
            i=j,k=t;
        }
        if(k) k--; //ȥ�����һ��������ӵĿո�
        s.erase(s.begin()+k,s.end()); //ȥ������Ŀո�
        reverse(s.begin(),s.end());
        return s;
    }
};
