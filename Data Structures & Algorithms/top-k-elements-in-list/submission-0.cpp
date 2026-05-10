class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i: nums){
            map[i]++;

        }

        vector<pair<int,int>> vec(map.begin() ,map.end());

        std::sort(vec.begin() ,vec.end(),[](const auto& a, const auto& b){
            return a.second > b.second;
        });

        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};
