class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int len1=landStartTime.size(),len2=waterStartTime.size();
        int ans=0x7f7f7f7f;
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                int tm=landStartTime[i]+landDuration[i];
                tm=max(tm,waterStartTime[j])+waterDuration[j];
                ans=min(ans,tm);
                tm=waterStartTime[j]+waterDuration[j];
                tm=max(tm,landStartTime[i])+landDuration[i];
                ans=min(ans,tm);
            }
        }
        return ans;
    }
};