class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v=nums;
        for(int x:nums){
            v.push_back(x);
        }
        return v;
    }
};