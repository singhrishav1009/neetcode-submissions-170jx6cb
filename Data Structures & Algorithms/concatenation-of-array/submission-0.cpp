class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans(2 * nums.size());

        for (int i=0,j=nums.size()-1; i < nums.size(), j>=0; i++,j--) {
            ans[i] = nums[i];
            ans[nums.size()+j] = nums[j];
        } 

        return ans;    
    }
};