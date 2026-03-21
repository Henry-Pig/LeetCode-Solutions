class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ump;
        ump['I']=1;
        ump['V']=5;
        ump['X']=10;
        ump['L']=50;
        ump['C']=100;
        ump['D']=500;
        ump['M']=1000;
        if(s.size()==1) return ump[s[0]];
        int ans=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(ump[s[i]]<ump[s[i+1]]) ans-=ump[s[i]];
            else if(ump[s[i]]>ump[s[i+1]]) ans+=ump[s[i]];
            else
            {
                int temp=ump[s[i]];
                while(i<s.size()-1&&s[i]==s[i+1])
                {
                    temp+=ump[s[i]];
                    i++;
                }
                if(i==s.size()-1||ump[s[i]]>ump[s[i+1]]) ans+=temp;
                else ans-=temp;
            }
            if(i==s.size()-2) ans+=ump[s[i+1]];
        }
        return ans;
    }
};