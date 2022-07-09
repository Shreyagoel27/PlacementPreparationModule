class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        vector<int>v(n,0);
        v[n-1]=p[n-1];
        for(int i=n-2;i>=0;i--)
        {
            v[i]=max(p[i],v[i+1]);
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=max(v[i]-p[i],x);
        }
        return x;
    }
};