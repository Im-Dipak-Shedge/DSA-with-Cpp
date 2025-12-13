class Solution {
    public:
     int mySqrt(int x) {
       int start = 1;
       int end = x; 
       long long mid = -1 ;

       if(x<=1){
        return x;
       }

       while(start<=end)
       {
        mid = start+ (end-start)/2;
        if(mid*mid>x){
            end = mid-1;
        }else if(mid*mid == x)
        {
            return mid;
        }
        else{
            start = mid+1;
        }
       }
       return round(end);

    }
};