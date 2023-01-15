
class Solution {
    vector<vector<int>> ans;
    private:
    void loop(int index,int target, vector<int>currSum, vector<int> candi)  //, unordered_set<vector<int>> stt)
    {
        if(index<0)
        return;
        if(target == 0) // && stt.find(currSum) == stt.end())
        {
            sort(currSum.begin(),currSum.end());
            ans.push_back(currSum);
            //stt.insert(currSum);
            return;
        }
        if(candi[index] <= target )
        {
            int a = candi[index];
            currSum.push_back(a);
            //stt.insert(candi[index]);
            loop(index-1,target-a,currSum,candi);
            // while(candi[index-1] == candi[index]++ && index>=0)
            // index--;
            currSum.pop_back();
            //stt.erase(candi[index]);
        }
        loop(index-1,target,currSum,candi); //,stt);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int> anss;
        // unordered_set<vector<int>>stt;
        loop(arr.size()-1,target,anss,arr);
        //sort(arr.begin(),arr.end());

        //loop(arr.size()-1,target,anss,arr);
        vector<vector<int>>::iterator it;
        it = unique(ans.begin(),ans.end());
        ans.resize(distance(ans.begin(),it));
        for(auto x:ans)
        {
            for(auto y:x)
            cout<<y<<"----\n";
        }
        return ans;
        
    }
};