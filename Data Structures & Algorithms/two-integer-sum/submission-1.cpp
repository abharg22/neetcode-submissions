class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>  sumMap;
        int required;
        vector<int> result;
        for(int i =0;i<nums.size();i++){
            required = target - nums[i];
            if(sumMap.find(required)!= sumMap.end()){
                result.push_back(sumMap[required]);
                result.push_back(i);
            }
            sumMap[nums[i]] = i;
        }
        return result;
        
    }
};
