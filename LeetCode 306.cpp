class Solution {
public:
    string add(string x,string y)
    {
        if((x[0]=='0'&&x.size()>1)||(y[0]=='0'&&y.size()>1))
        return "!";
        vector<int> a,b,c;
        string res;
        for(int i=x.size()-1;i>=0;i--) a.push_back(x[i]-'0');
        for(int i=y.size()-1;i>=0;i--) b.push_back(y[i]-'0');
        int t=0;
        for(int i=0;i<a.size()||i<b.size()||t;i++)
        {
            if(a.size()>i) t+=a[i];
            if(b.size()>i) t+=b[i];
            c.push_back(t%10);
            t/=10;
        }
        for(int i=c.size()-1;i>=0;i--)
            res+=to_string(c[i]);
        return res;
    }
    bool check(string &num,int first,int second)
    {
        int n=num.size();
        int last=-1;
        do{
            string ans=add(num.substr(last+1,first-last),num.substr(first+1,second-first));
            for(int i=second+1,j=0;j<ans.size();i++,j++)
            {
                if(i==n||num[i]!=ans[j])
                return false;
            }
            last=first;
            first=second;
            second=second+ans.size();
        }while(second<n-1);
        return true;
    }
    bool isAdditiveNumber(string num) {
        int n=num.size();
        for(int first=0;first<n-1;first++)
        {
            for(int second=first+1;second<n-1;second++)
            {
                if(check(num,first,second)) return true;
            }
        }
        return false;
    }
};