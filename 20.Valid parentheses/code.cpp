class Solution {
public:
    bool isValid(string s) {
        vector<char> par;
        if(s.size()%2==1) {
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                par.push_back(s[i]);
            else {
                if(par.empty())
                    return false;
                if((s[i]==')' && par.back()=='(') ||
                   (s[i]=='}' && par.back()=='{') ||
                   (s[i]==']' && par.back()=='['))
                {
                    par.pop_back();
                }
                else {
                   
                    return false;
                }
            }
        }
        return par.empty();
    }
};
