class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        unordered_map<int,int>ump;
        vector<int> ans;
        for(int i=0;i<len;i++)
        {
            int ano=target-nums[i];
            if(ump.find(ano)==ump.end())
            {
                ump[nums[i]]=i;
            }
            else
            {
                ans.push_back(ump[ano]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};