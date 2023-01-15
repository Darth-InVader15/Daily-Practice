//#define int long long
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        int mid =0;
        vector<int>ans(2,-1);
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(nums[mid] == target)
            {
                ans[0] = mid;
                break;
            }
            else if(nums[mid]<target)
            low = mid+1;
            else
            high =mid-1;
        }
        //cout<<mid<<"  1\n";
        if(ans[0] == -1)
        return ans;
        // else if(nums[mid+1] != target && nums[mid-1] != target)
        // {
        //     ///if(nums[mids-1] == target)

        //     ans[1]=mid;
        //     return ans;
        // }
        int midl = mid;
        int minn = midl;
        if((mid-1>=0) && nums[midl-1] == target)
        {
            minn = midl-1;
            int highl = midl-1;
            int lowl = 0;//int midl = mid
            while(lowl<=highl)
            {
                midl=lowl+(highl-lowl)/2;
            
                if(nums[midl] == target)
                {
                    if(midl<minn)
                    minn = midl;
                    highl=midl-1;
                //continue;
                }
                else if(nums[midl] < target)
                lowl = midl+1;
                else
                highl = midl-1;            
            }
        }
        //cout<<midl<<"  2\n";
        low = mid+1;
        high = nums.size()-1;
        int maxx = mid;
        if(mid+1 < nums.size() && nums[mid+1] == target)
        {
            maxx = mid+1;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(nums[mid] == target)
                {
                    maxx = mid;
                    low=mid+1;
                    //cout<<maxx<<"  nn\n"<<low<<high;
                //continue;
                }
                else if(nums[mid] < target)
                low = mid+1;
                else
                high = mid-1;
            }
        }
        ans[0] = minn;
        ans[1] = maxx;
        return ans;        
    }
};