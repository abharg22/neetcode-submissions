class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> seenMap;
        string can;
        for(string s : strs){
            can = s;
            sort(can.begin(),can.end());

            seenMap[can].push_back(s);

        }
        vector<vector<string>> result;
        result.reserve(seenMap.size());
        for(auto&[key,group]: seenMap){
            result.push_back(move(group));
        }
        return result;
        
    }
};
