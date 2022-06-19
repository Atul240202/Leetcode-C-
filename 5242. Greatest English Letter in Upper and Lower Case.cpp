#include <bits/stdc++.h>
class Solution {
public:
    string greatestLetter(string s) {
        vector<char> upper;
        vector<char> lower;
        for(int i=0;i<s.length();i++){
            if(abs(s[i]-'0')>=97)
            {
                lower.push_back(s[i]);
            }
            else
                upper.push_back(s[i]);
        }
        char sl =upper[0];
        string  sl1;
        for(int i=1;i<upper.size();i++)
        {
            char l = tolower(upper[i]);
            if(find(lower.begin(), lower.end(),l)!=lower.end()){
                if(abs(upper[i]-'0') > abs(sl-'0')) {
                    sl = upper[i];}
            }
        }
        sl1.push_back(sl);
        return sl1;
    }
  //Debugging Required
        
};
