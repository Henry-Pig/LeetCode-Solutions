class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string res;
        
        while (i >= 0 || j >= 0 || carry) {
            int digitA = i >= 0 ? a[i] - '0' : 0;
            int digitB = j >= 0 ? b[j] - '0' : 0;
            int sum = digitA + digitB + carry;
            res.push_back('0' + (sum % 2));
            carry = sum / 2;
            i--;
            j--;
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};