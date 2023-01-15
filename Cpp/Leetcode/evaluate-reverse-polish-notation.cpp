#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stk;
        unordered_set<string> stt;
        stt.insert("+");
        stt.insert("*");
        stt.insert("/");
        stt.insert("-");
        // while(stk.size()!= 1)
        // {
            for(auto x:tokens)
            {
                if(stt.find(x) == stt.end())
                {
                    stk.push(x);
                }
                else
                {
                    if (x == "+")
                    {
                        int a = stoi(stk.top());
                        stk.pop();
                        int b = stoi(stk.top());
                        stk.pop();
                        stk.push(to_string(a+b));
                    }
                    if (x == "*")
                    {
                        int a = stoi(stk.top());
                        stk.pop();
                        int b = stoi(stk.top());
                        stk.pop();
                        stk.push(to_string(a*b));
                    }
                    if (x == "/")
                    {
                        int a = stoi(stk.top());
                        stk.pop();
                        int b = stoi(stk.top());
                        stk.pop();
                        stk.push(to_string(b/a));
                    }
                    if (x == "-")
                    {
                        int a = stoi(stk.top());
                        stk.pop();
                        int b = stoi(stk.top());
                        stk.pop();
                        stk.push(to_string(b-a));
                    }
                }
            }
        //}

        return stoi(stk.top());
        
    }
};