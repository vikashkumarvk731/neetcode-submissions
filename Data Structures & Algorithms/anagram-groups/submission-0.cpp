class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string , vector<string>> res;      
          for(int i = 0; i<strs.size(); i++) {
            string s = strs[i];
            string sortedS = s;
            sort(sortedS.begin() , sortedS.end());
            res[sortedS].push_back(s);
          }
          vector<vector<string>> result;
          for(auto& pair: res) {
            result.push_back(pair.second);
          }
          return result;
    }
};
