class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        char str[10];
        for(int i=0;i<1<<10;i++) //枚举手表的所有情况
        {
            int s=0;
            for(int j=0;j<10;j++)
            if(i>>j&1)s++; //求出s个1

            if(s==turnedOn)
            {
            int h=i>>6,m=i&63;
            if(h<12&&m<60)
            {
                sprintf(str,"%d:%02d",h,m);
                ans.push_back(str);
            }
            } 
        }
        return ans;
    }
};