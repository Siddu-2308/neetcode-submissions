class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> v;
        for(int x:nums){
            v[x]++;
            if(v[x]>1){
                return true;
            }
        }
        return false;
    }
};