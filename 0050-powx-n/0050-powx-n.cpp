class Solution {
public:
    double myPow(double x, int n) {
        if(x==1) return x;
        double ans=1;
        int nn=n;
        while(n)
        {
            if(n%2) ans*=x;
            x*=x;
            n/=2;
        }
        return nn<0?1.0/ans:ans;
    }
};