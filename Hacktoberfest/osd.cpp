//Problem- https://leetcode.com/problems/odd-string-difference/

class Solution {
public:
    string oddString(vector<string>& words) {
        unordered_map<string, pair<int, string>> odd;

        for(int i = 0; i < words.size(); i++){
            string p;
            for(int j = 0; j < words[i].size()-1; j++)
                p += to_string((words[i][j+1]-'0') - (words[i][j]-'0')) + " ";

            odd[p].first++;
            odd[p].second = words[i];
        }
        for(auto o: odd){
            if(o.second.first == 1) return o.second.second;
        }
        return "";
    }
};
