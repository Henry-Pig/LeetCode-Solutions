class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1||nums.size()==2) return true;
        int dir=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) continue;
            else if(dir==-1) dir=nums[i-1]<nums[i];
            else if((nums[i-1]<nums[i])!=dir) return false;
        }
        return true;
    }
};