class Solution {
public:
    double pow(double x, int n)
    {
        if(n==0)return 1;
        if(n==1)return x;
         int y=n/2;
        double z=pow(x,abs(y));
        z=z*z;
        if(abs(n)%2!=0)
        {
            z=z*x;
        }
        return z;
    }
    double myPow(double x, int n) {
        if(n==0)return 1;
        int y=n/2;
        double z=pow(x,abs(y));
        z=z*z;
        if(abs(n)%2!=0)
        {
            z=z*x;
        }
        if(n<0)z=1/z;
        return z;
    }
};