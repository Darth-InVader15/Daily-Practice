class Solution {
    vector<vector<int>>ans;
private:

    void solve(vector<int> arr,vector<int>& currSum,int target,int index){
        int n = arr.size();
        if(index>n || target<0)
        return;
        if(target==0){
            ans.push_back(currSum);
            return;
        }
        
        for(int i = index; i < n; i++){
            currSum.push_back(arr[i]);
            solve(arr,currSum,target-arr[i],i+1);
            while(i<n-1 && arr[i]==arr[i+1])i++;
            currSum.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int &k) {
        
        vector<int>temp;
        
        sort(arr.begin(),arr.end());
        solve(arr,temp,k,0);
        return ans;
    }
};