class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> v;
        for(int i=0;i<nums.size();i++){
            int t=target-nums[i];
            if(v.find(t)!=v.end()){
                return {v[t],i};
            }
            v[nums[i]]=i;
        }
        return {};
    }
};
