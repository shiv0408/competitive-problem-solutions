//Problem- https://leetcode.com/problems/words-within-two-edits-of-dictionary/

class Solution {
    int diff(string a, string b){
        int freq = 0;
        for(int i = 0; i < a.size(); i++) if(a[i] != b[i]) freq++;

        return freq;
    }
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& dict) {
        int n = q.size(), m = dict.size();
        vector<string> ans;

        for(int i = 0; i < n; i++){
            string a = q[i];
            for(int j = 0; j < m; j++){
                string b = dict[j];
                int check = diff(a, b);
                if(check <= 2) {
                    ans.push_back(a);
                    break;
                }
            }
        }
        return ans;
    }
};
