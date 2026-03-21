class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()==1) return false;
        for(int len=s.size()/2;len>0;len--)
        {
            if(s.size()%len) continue;
            int i;
            for(i=len;i<s.size();i++)
            {
                if(s[i]!=s[i%len]) break;
            }
            if(i==s.size()) return true;
        }
        return false;
    }
};