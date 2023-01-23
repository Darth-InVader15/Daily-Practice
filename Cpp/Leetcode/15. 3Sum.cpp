class Solution {
vector<vector<int>> ans;
private:
    void solve(vector<int>nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            break;
            if(i>0 && nums[i]==nums[i-1])
            continue;

            //  2pointer beigns here
            int low = i+1;
            int high = nums.size()-1;
            int sum =0;
            while(low<high)
            {
                sum = nums[i]+nums[low]+nums[high];
                if(sum == 0)
                {
                    ans.push_back({nums[i],nums[low],nums[high]});

			//now in order to avoid duplicates, we ignore indexes with same 	
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high];  
                    while(low < high && nums[low] == last_low_occurence){   
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence)
                        high--;
                }
                else if(sum>0)
                high--;
                else
                low++;
            }
        }
        //return ans;
    }
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]>0 || nums.size()<3)
        return ans;
        solve(nums);
        return ans;
        
    }
};