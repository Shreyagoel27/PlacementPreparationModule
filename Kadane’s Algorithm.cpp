#include<bits/stdc++.h>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            
            x=max(x+nums[i],nums[i]);
            sum=max(sum,x);
        }
        return sum;
    }
    void main()
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cout<<maxSubArray(v)<<endl;
    }
