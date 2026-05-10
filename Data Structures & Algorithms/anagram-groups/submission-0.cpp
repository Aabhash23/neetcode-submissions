class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> ans;

        for(string s : strs){
            string sorted_string =s;

            std::sort(sorted_string.begin() ,sorted_string.end());

            map[sorted_string].push_back(s);
        }

        for( auto& pair :map){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
