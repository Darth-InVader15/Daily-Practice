class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi = INT_MIN, maxx = 0;
        // vector<int> arr;
        for(auto x: nums)
        {
            maxx+=x;
            if(maxx > maxi)
            maxi = maxx;
            if(maxx<0)
            maxx = 0;
            
            
        }
        // return arr; 
        return maxi;      

        
    }
};