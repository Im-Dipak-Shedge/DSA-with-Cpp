class Solution {
public:
    string addBinary(string a, string b) {
    int al=a.length()-1 ;
    int bl=b.length()-1 ;
    int sum=0;
    int carry=0;
    
    string result;
    while(al>=0 || bl>=0 || carry==1){
            
       sum= (al<0?'0':a[al]) -'0' +(bl<0?'0':b[bl]) -'0' + carry;
  carry = 0;
    //   cout<<sum<<endl<<carry<<endl;
        if(sum>1){carry=1;}
        sum=sum%2;
result.push_back(sum+'0');        
        al--;
        bl--;
    }
    reverse(begin(result),end(result));
    return result;
    }
};