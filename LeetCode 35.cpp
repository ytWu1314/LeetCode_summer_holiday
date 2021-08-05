class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size(); 
		//有边界情况，如果整个数组都小于target，二分的区间是 [0,n] 
        while(l<r) 
        {
            int mid=l+r>>1;
            if(nums[mid] >=target ) r=mid;
            else l=mid+1; 
        }
        return r;
    }
};
