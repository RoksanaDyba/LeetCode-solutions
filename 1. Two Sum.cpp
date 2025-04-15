class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = size(nums);
        vector<int> ind = {};
        for (int i=0; i<l; i++){
            for (int j=i+1; j<l; j++){
                if (target == nums[i] + nums[j]){
                    ind = {i,j};
                }
            }
        }
        return ind;
    }
};
