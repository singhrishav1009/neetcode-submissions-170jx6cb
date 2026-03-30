class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        int n = nums.size();

        // O(nlogn) approach

        // if(n == 1) 
        //     return false;

        // // take time O(nlogn) 
        // sort(nums.begin(),nums.end());

        // for (int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1])
        //         return true;
        // }

        // return false;

        // 2nd approach :

        // space  : o(n)
        // set<int> s; 

        // // take time logn + logn + logn + . . .(n times ) = o(n* logn) time
        // for (int i=0; i<n; i++) {
        //     s.insert(nums[i]);
        // }

        // if(s.size()!=nums.size()) {
        //     return true;
        // }

        // return false;

        // best approach :
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size() != nums.size();        
    }
};