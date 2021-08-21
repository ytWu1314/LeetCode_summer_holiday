class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        //只有一个数的情况，初始化位nums[0]
        int f=nums[0],g=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int a=nums[i];
            //滚动数组
            int fa=f*a,ga=g*a;
            f=max(a,max(fa,ga));
            g=min(a,min(fa,ga));
            ans=max(f,ans);
        }
        return ans;
    }
};