class Solution {
public:
    unordered_map<int,int> mpp; //DP
    int fib(int n) {
        if(n==0){
            mpp[0] = 0;
            return 0;
        }
        if(n==1){
            mpp[1] =1;
            return 1;
        }
        if(mpp.find(n) != mpp.end())
        return mpp[n];
        else
        mpp[n] = fib(n-1)+fib(n-2);
        return fib(n-1) + fib(n-2);
        
    }
};