class Solution {
    vector<vector<int>> ans;
private:
    void loop(int index,int target, vector<int> currSum, vector<int> candi)
    {
        if(index < 0)
        return;
        if(target == 0)
        {
            ans.push_back(currSum);
            return;
        }
        if(candi[index]<=target)
        {
            currSum.push_back(candi[index]);
           // print(currSum);
            loop(index,target-candi[index],currSum, candi);
            currSum.pop_back();
        }
        loop(index-1, target, currSum, candi);
    }
    // void print(vector<int> currSum)
    // {
    //     for(auto x:currSum)
    //     cout<<x<<"-";
    //     cout<<" --------\n";
    // }
public:
    vector<vector<int>> combinationSum(vector<int>& candi, int target) 
    {
        vector<int> temp;
        loop(candi.size()-1,target,temp, candi);
        return ans;
    }
};