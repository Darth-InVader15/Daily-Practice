class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> suffarr;
        suffarr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            suffarr.push_back(suffarr[i-1] + nums[i]);
        }
        return suffarr;
        
    }
};