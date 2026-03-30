class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans(2);
        unordered_map <int, int> m;
        int n=nums.size();

        for (int i=0;i<n;i++) {

            // time : O(1) for look up
            // it searches for index not value
            auto p = m.find(target - nums[i]);

            if (p != m.end()) {
                ans[0] = p->second;
                ans[1] = i;
                return ans;
            }

            m[nums[i]] = i;

        }
        
        return ans;
   
    }
};