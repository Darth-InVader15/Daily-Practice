class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        if(s.size()==0)
        return 1;
        if(t.size()==0)
        return 0;
        if(s.size() == t.size())
        {
            if(s != t)
            return 0;
        }
        for(int i=0;i<t.size();i++)
        {
            if(s[a] == t[i])
            a++;
        }
        //cout<<a<<"\n";
        if(a == s.size())
        return 1;
        else
        return false;
        
    }
};