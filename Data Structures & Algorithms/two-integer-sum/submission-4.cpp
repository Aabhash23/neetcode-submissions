class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int target) {

        std::vector<int> ans;
        int temp;
        for( int i =0;i< vec.size();i++){

            
            temp = target - vec[i];

            for(int j =i+1;j<vec.size();j++){
                if(vec[j] == temp && i != j){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }

        return ans;
    }
};
