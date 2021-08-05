class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        if(n==0) return {-1,-1};
        while(l<r)
        {
            int mid=l+r>>1;
            if(nums[mid] >= target ) r=mid;
            else l=mid+1; 
        }
        if(nums[r] !=target ) return {-1,-1};
        int L=r;
        l=L,r=n-1;
        while(l<r)
        {
            int mid=l+r+1>>1;
            if(nums[mid] <= target ) l=mid;
            else r=mid-1;
        }
        return {L,r};
    }
};