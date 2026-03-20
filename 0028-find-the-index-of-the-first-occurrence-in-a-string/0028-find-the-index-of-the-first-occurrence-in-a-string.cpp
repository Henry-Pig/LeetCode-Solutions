class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1=haystack.size(),len2=needle.size();
        vector<int> next(len2,0);
        int k=0;
        for(int i=1;i<len2;i++)
        {
            while(k>0&&needle[i]!=needle[k])
            {
                k=next[k-1];
            }
            if(needle[k]==needle[i]) k++;
            next[i]=k;
        }
        //for(int i=0;i<len2;i++) cout<<next[i]<<" ";
        int j=0;
        for(int i=0;i<len1;i++)
        {
            while(j>0&&haystack[i]!=needle[j])
            {
                j=next[j-1];
            }
            if(haystack[i]==needle[j]) j++;
            if(j==len2)
            {
                return i-len2+1;//j++,but i didn't
            }
        }
        return -1;
    }
};