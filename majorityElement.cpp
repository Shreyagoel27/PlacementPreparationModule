class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=1,c=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==c)n++;
            else n--;
            if(n==0)
            {
                c=nums[i];
                n=1;
            }
        }
        return c;
    }
};
