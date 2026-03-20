class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.size(),len2=word2.size();
        int i=0,j=0;
        string ans="";
        while(i<len1&&j<len2)
        {
            ans=ans+word1[i]+word2[j];
            i++;j++;
        }
        for(i;i<len1;i++) ans=ans+word1[i];
        for(j;j<len2;j++) ans=ans+word2[j];
        return ans;
    }
};