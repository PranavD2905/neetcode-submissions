class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> ans;
        for(int i =0;i<nums.size(); i++){
            int rem = target - nums[i];
            if(hash.find(rem) != hash.end()){
                auto it = hash.find(rem);
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
            hash[nums[i]] = i;
        }
        return ans;
    }
};
