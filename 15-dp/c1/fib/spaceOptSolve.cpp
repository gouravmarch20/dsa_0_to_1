class Solution {
public:
    int spaceOptSolve(int n ){
        // base 
        if(n == 1) return 1;
        if (n == 0) return 0;
        int prev2 = 0;
        int prev1 = 1;

        
        int curr ;
        for(int i = 2 ; i <= n ; i++){
            curr = prev1 + prev2 ;
            //shifting
            prev2 = prev1 ;
            prev1 = curr;
        } 
        return curr;
    }
    int fib(int n) {
        return spaceOptSolve(n);
    }
};