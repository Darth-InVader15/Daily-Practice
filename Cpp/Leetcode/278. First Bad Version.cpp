// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {

public:
    int firstBadVersion(int n) {
        int ans;
        int low = 0;
        int high = n;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(isBadVersion(mid))
            {
                if(!isBadVersion(mid-1))
                {
                    ans = mid;
                    break;
                }
                high = mid-1;
                ans = mid;
                continue;
            }
            else
            {
                low = mid+1;
                continue;
            }
        }
        return ans;
        
    }
};