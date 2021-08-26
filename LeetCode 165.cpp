class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1,v2;
        for(int i=0,j=0;i<version1.size()||j<version2.size();)
        {
            int a=i,b=j;
            while(a<version1.size()&&version1[a]!='.') a++;
            while(b<version2.size()&&version2[b]!='.') b++;
            if(a==i) v1=0;
            else v1=stoi(version1.substr(i,a-i));
            if(b==j) v2=0;
            else v2=stoi(version2.substr(j,b-j));
            if(v1>v2) return 1;
            if(v2>v1) return -1;
            i=a+1,j=b+1;
        }
        return 0;
    }
};