class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            string s1 = strs[0];
    
 for(int i=1; i<strs.size();i++)
 {
     int j =0;
     while(j<s1.size() && j< strs[i].size() && s1[j]==strs[i][j]){
         j++;
     }
 s1 = s1.substr(0, j);
      cout<<s1 ; 
 }
 return s1;
    }
};
