class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i=0,j=0;
        vector<int> ans;
        for(i=0;i<num1.size();i++)
        {
            j=0;
            int carry=0;
            int temp1=num1[i]-'0';
            while(j<num2.size()||carry)
            {
                int temp2=j<num2.size()?num2[j]-'0':0;
                int temp=temp1*temp2+carry;
                carry=0;
                if(i+j>=ans.size())
                {
                    ans.push_back(temp%10);
                }
                else
                {
                    ans[i+j]=ans[i+j]+temp%10;
                    carry=ans[i+j]/10;
                    ans[i+j]%=10;
                }
                carry+=temp/10;
                j++;
            }
        }
        string res="";
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(!res.size()&&!ans[i]) continue;
            res=res+char('0'+ans[i]);
        }
        if(!res.size()) res="0";
        return res;
    }
};