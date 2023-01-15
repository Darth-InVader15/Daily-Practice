class Solution {
public:
    vector<vector<int>> ansarr;
    int sum(vector<int> &combo)
    {
        int ans=0;
        for(auto x: combo)
        {
            ans+=x;
        }
        return ans;
    }
    void combsum(int k, int n, vector<int> &combo, int num)
    {
        
                
        if(k == 0)
        {
            if(sum(combo) == n)
            {
                ansarr.push_back(combo);
            }
            return;
        }
        if(num > 9)
        return;
        
        combo.push_back(num);
        combsum(k-1, n,combo, num+1);
        combo.pop_back();
        combsum(k,n,combo,num+1);    
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>combo;
        combsum(k,n,combo,1);
        return ansarr;        
    }
};
