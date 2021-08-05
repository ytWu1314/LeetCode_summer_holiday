class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size(); 
		//�б߽����������������鶼С��target�����ֵ������� [0,n] 
        while(l<r) 
        {
            int mid=l+r>>1;
            if(nums[mid] >=target ) r=mid;
            else l=mid+1; 
        }
        return r;
    }
};
