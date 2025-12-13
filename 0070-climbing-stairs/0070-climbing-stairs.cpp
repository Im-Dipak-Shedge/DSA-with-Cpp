class Solution {
public:
   int climbStairs(int n) {
    // base cases
    if(n <= 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;
    
    int t1 = 2;
    int t2 = 1;
    int t3 = 0;
    
    for(int i=2; i<n; i++){
    	t3 = t1 + t2;
    	t2 = t1;
        t1 = t3;
    }
    return t3;
}
};