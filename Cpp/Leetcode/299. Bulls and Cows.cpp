class Solution {
int bull=0, cow=0;
private:
    void solve(string s, string g)
    {
        //1123          //1807
        //0111          //7810 
        unordered_map<char,int> mpp;
        unordered_set<int>bulls;
        //Acquiring all the elements
        for(auto x: s)
            mpp[x]++;
        //Finding the no of bulls, ie same place and face value
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == g[i])
            {
                bull++;
                bulls.insert(i);//Storing the location of the bulls
                mpp[s[i]]--;
            }
        }
        //Finding the no of cows, ie elements with same face value in mpp
        //But they weren't at the required place
        for(int i=0;i<s.size();i++)
        {
            //bulls contain the location of all the bulls, so we need to skip 'em
            if(bulls.find(i) != bulls.end())
            continue;

            if(mpp[g[i]] > 0)
            {
                cow++;
                mpp[g[i]]--;
            }
        }        
    }

public:
    string getHint(string sec, string gss) 
    {
        solve(sec,gss);
        return to_string(bull)+"A"+to_string(cow)+"B";
        
    }
};