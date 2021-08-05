class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return -1;
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid]>=nums[0])
            {
                if(target>nums[mid])
                l=mid+1;
                if(target<nums[0])
                l=mid+1;
                if(target<=nums[mid] && target >=nums[0])
                r=mid;

            }
            else {
                if(target>=nums[0])
                r=mid;
                if(target<=nums[mid])
                r=mid;

                if(target < nums[0] && target >nums[mid])
                l=mid+1;
            }
        }
        return nums[l]==target ?l:-1;
    }
};