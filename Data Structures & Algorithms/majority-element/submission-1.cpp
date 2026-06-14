class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0;
        int maj=nums[0];
        for(int k=0;k<nums.size();k++){
            if(i==0){
                maj=nums[k];
                i=1;
            }
            else if(nums[k]==maj){
                i++;
            }
            else{
                i--;
            }
        }
        return maj;
    }
};