#define ll int
#define pb push_back
class Solution {
    bool checkk(vector<int> arr, ll bcol, ll rt_col)
    {
        //  \|
        if(arr[bcol] == 1 && bcol+1 == rt_col)
        return false;
        //  |/
        else if(arr[bcol] == -1 && bcol-1 == -1)
        return false;
        //  \/ banega 
        else if(arr[bcol] == -1 && bcol-1 >= 0 && arr[bcol-1] == 1)
        return false;
        else if(arr[bcol] == 1 && bcol+1 < rt_col && arr[bcol+1] == -1)
        return false;

        else
        return true;
    }
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        ll rows = grid.size()-1;
        ll cols = grid[0].size()-1;
        int curr_row,curr_col;
        int s=0;
        vector<int> ans;
        for(int i=0;i<=cols;i++)
        {
            curr_row=0;
            curr_col = i;
            s=0;

            while(curr_row<=rows)
            {
                if(!checkk(grid[curr_row], curr_col, cols+1))
                {
                    ans.pb(-1);
                    s=1;
                    break;
                }
                else
                {
                    if(grid[curr_row][curr_col] == 1)
                    curr_col++;
                    else
                    curr_col--;
                    curr_row++;
                }
            }
            if(!s)
            ans.pb(curr_col);

        }
        return ans;
    }
};