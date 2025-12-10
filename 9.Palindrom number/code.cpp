class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        int rem = 0;
        long res = 0;
   if(x<0){
    return false;
   }
        while(a!=0){
            rem = a%10;
            res = res*10 +floor(rem);
            a = a/10;
        }
        if(res==x ){
            return true;
        }
         return false;

    
    }
};
