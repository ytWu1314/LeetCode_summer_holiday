class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k=nums.size()-1;
        
        //�Ӻ���ǰ�ҽ������� �ҵ��±� k-1
		  
        while(k>0 && nums[k-1] >= nums[k] ) k--;
        if(k==0)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        int t=k;
        
        //�ҵ������±�Ϊ k-1�� ��һ����  
        while(t<nums.size() && nums[t]>nums[k-1]) t++;
        
        //���� 
        swap(nums[t-1],nums[k-1]);
        
        //��������иı�Ϊ���� 
        reverse(nums.begin()+k,nums.end());
    }
};
