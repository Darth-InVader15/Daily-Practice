class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int low =0,high = nums.size()-1;

        while(low<=high)
        {
            if(nums[low] == val)
            {
                while(nums[high] == val && high>0)
                {
                    high--;
                }
                if(low<=high)
                {
                    int temp = nums[low];
                    nums[low] = nums[high];
                    nums[high] = temp;
                    high--;
                }
            }
            low++;
        }
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] == val)
            break;
        }
        return i;
    }
};