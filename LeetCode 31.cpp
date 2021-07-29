class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=nums.size()-1;
        
        //从后往前找降序序列 找到下标 k-1
		  
        while(k>0 && nums[k-1] >= nums[k] ) k--;
        if(k==0)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        int t=k;
        
        //找到大于下标为 k-1的 第一个数  
        while(t<nums.size() && nums[t]>nums[k-1]) t++;
        
        //交换 
        swap(nums[t-1],nums[k-1]);
        
        //后面的序列改变为升序 
        reverse(nums.begin()+k,nums.end());
    }
};
