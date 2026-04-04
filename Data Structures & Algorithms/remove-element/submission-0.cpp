class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int count=0;
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            if(val!=nums[i]){
                ans[count]=nums[i];
                count++;
            }
        }

        nums=ans;

        return count;
        
    }
};