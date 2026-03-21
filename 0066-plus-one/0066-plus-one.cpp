class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int temp=1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            temp=digits[i]+temp;
            digits[i]=temp%10;
            temp=temp/10;
            if(!temp) return digits;
        }
        if(temp)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};