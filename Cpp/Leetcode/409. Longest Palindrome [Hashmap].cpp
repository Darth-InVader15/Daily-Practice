class Solution {
private:
    unordered_map<char,int>mpp;
    int ans=0;
    void loop(string str)
    {
        for(auto x:str)
        mpp[x]++;
    }
    void solve()
    {
        int cnt=0,flag=0;
        for(auto x:mpp)
        {
            if(x.second >1)
            {
                if(x.second % 2==0)
                cnt+= x.second;
                else
                {
                    cnt+= x.second-1;
                    flag++;
                }
            }
            else
            flag++;
        }
            ans+=cnt;
            if(flag)
            ans++;
        
    }
public:
    int longestPalindrome(string s) {
        loop(s);
        solve();
        return ans;
    }
};