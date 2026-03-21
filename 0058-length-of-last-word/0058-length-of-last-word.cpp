class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,cur=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) cur++;
            else
            {
                ans=(cur==0?ans:cur);
                cur=0;
            }
        }
        return cur!=0?cur:ans;
    }
};