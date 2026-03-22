class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>ump;
        for(int i=0;i<bills.size();i++)
        {
            cout<<i<<" ";
            if(bills[i]==5) ump[5]++;
            else if(bills[i]==10)
            {
                if(ump[5]<=0) return false;
                ump[5]--;
                ump[10]++;
            }
            else
            {
                if(ump[5]>0&&ump[10]>0)
                {
                    ump[10]--;
                    ump[5]--;
                }
                else if(ump[5]>=3) ump[5]-=3;
                else return false;
            }
        }
        return true;
    }
};