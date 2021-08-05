class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int val=0,start=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            val++;
            else val--;
            if(val<0) val=0,start=i+1;
            else if(val==0) ans=max(ans,i-start+1);
        }

        //贪心算法 避免出现前面左括号太多没有出现<=0 的情况 所以需要逆推遍历一边
        val=0,start=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            val++;
            else val--;
            if(val<0) val=0,start=i-1;
            else if(val==0) ans=max(ans,start-i+1);
        }
        return ans;
    }
};
