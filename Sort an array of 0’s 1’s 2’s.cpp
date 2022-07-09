class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int k=0;
        while(i<j && k<=j)
        {
            if(nums[k]==0)
            {
                int x=nums[i];
                nums[i]=nums[k];
                nums[k]=x;
                if(i==k)k++;
                i++;
            }
            else if(nums[k]==2)
            {
                int x=nums[j];
                nums[j]=nums[k];
                nums[k]=x;
                j--;
            }
            else if(nums[k]==1)k++;
        }
    }
};



