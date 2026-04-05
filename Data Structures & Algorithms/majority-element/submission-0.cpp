class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        unordered_map<int,int> count;

        for(int i=0;i<n;i++){
            count[nums[i]]++;

            if( count[nums[i]]>n/4){
                return nums[i];
            }
        }



        
    }
};