class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>scores;
        int len=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i].compare("+")==0)
            {
                scores.push_back(scores[len-1]+scores[len-2]);
                len++;
            }
            else if(operations[i].compare("D")==0)
            {
                scores.push_back(scores[len-1]*2);
                len++;
            }
            else if(operations[i].compare("C")==0)
            {
                scores.pop_back();
                len--;
            }
            else
            {
                scores.push_back(stoi(operations[i]));
                len++;
            }
        }
        int ans=0;
        for(int i=0;i<len;i++)
        {
            ans+=scores[i];
        }
        return ans;
    }
};