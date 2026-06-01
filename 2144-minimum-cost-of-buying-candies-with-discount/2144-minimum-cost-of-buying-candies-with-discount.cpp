class Solution {
public:

    static bool cmp(int x,int y)
    {
        return x>y;
    }

    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),cmp);
        int ans=0;
        for(int i=0;i<cost.size();i++)
        {
            if(i%3!=2) ans+=cost[i];
        }
        return ans;
    }
};