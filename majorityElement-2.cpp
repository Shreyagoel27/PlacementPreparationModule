https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums){
        int c1=0,c2=0,p,q;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(c1==0 && q!=nums[i])
            {
                p=nums[i];
                c1=1;
            }
            else if(c2==0 && p!=nums[i])
            {
                q=nums[i];
                c2=1;
            }
            else if(p==nums[i])c1++;
            else if(q==nums[i])c2++;
            else{
                c1--;
                c2--;
            }
        }
         c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(p==nums[i])c1++;
            else if(q==nums[i])c2++;
        }
        vector<int>v;
        if(c1>n/3)v.push_back(p);
        if(c2>n/3)v.push_back(q);
        return v;
    }
};
// 1 2 2 3 3
