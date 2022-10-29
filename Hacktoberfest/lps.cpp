//Problem- https://leetcode.com/problems/longest-palindromic-substring
class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int len = 0;
        
        for(int i = 0; i < s.size(); i++){
            int l = i, r = i;
            while(l >= 0 && r < s.size() && s[l] == s[r]){
                // cout<<l<<" 1dst "<<r<<endl;
                // cout<<s.substr(l, r-l+1)<<" "<<(r-l+1)<<" "<<len<<endl;
                if((r-l+1) > len){
                    ans = s.substr(l, r-l+1);
                    len = r - l  + 1;
                }
                l--;
                r++;
            }
            l = i, r = i+1;
            while(l >= 0 && r < s.size() && s[l] == s[r]){
                // cout<<l<<" "<<r<<endl;
                // cout<<s.substr(l, r-l+1)<<" "<<(r-l+1)<<" "<<len<<endl;
                if((r-l+1) > len){
                    ans = s.substr(l, r-l+1);
                    len = r - l  + 1;
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};
