class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // 1st Approach
        // time: o(n) , worst case o(n2) : read about hash collisions in unordered_map;
        // space : o(n)
        // int n=nums.size();
        // unordered_map<int,int> count;

        // for(int i=0;i<n;i++){
        //     count[nums[i]]++;

        //     if( count[nums[i]]>n/4){
        //         return nums[i];
        //     }
        // }

        // 2nd Approach
        // time: o(n)
        // space : o(1)
        int n=nums.size();
        unordered_map<int,int> count;

        for(int i=0;i<n;i++){
            count[nums[i]]++;

            if( count[nums[i]]>n/2){
                return nums[i];
            }
        }



        
    }
};