class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1)
        return true;
        if(n<=0)
        return false;
        if((double)n/4 != (int)n/4)
        return false;

        return isPowerOfFour(n/4);
        
        
    }
};