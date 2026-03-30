class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(2 * n);

        // solved earlier

        // for (int i=0,j=n-1; i < n, j>=0; i++,j--) {
        //     ans[i] = nums[i];
        //     ans[n+j] = nums[j];
        // } 

        // return ans;    

        // better approach
        for (int i=0;i<n;i++) {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        } 

        return ans;
    }
};