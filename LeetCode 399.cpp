class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        unordered_set<string> v; //存储点，不能重复使用set        
        unordered_map<string,unordered_map<string,double>> d;//存储图，类似邻接矩阵

        for(int i=0;i<equations.size();i++)
        {
            auto a=equations[i][0],b=equations[i][1];
            d[a][b]=values[i],d[b][a]=1.0/values[i];
            v.insert(a),v.insert(b);
        }
        for(auto k:v)
        for(auto i:v)
        for(auto j:v)
        {
            if(d[i][k]&&d[k][j])
            d[i][j]=d[i][k]*d[k][j];
        }
        vector<double> ans;
        for(auto q:queries)
        {
            auto a=q[0],b=q[1];
            if(d[a][b])
            ans.push_back(d[a][b]);
            else ans.push_back(-1);
        }
        return ans;
    }
};