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

        //     if( count[nums[i]]>n/2){
        //         return nums[i];
        //     }
        // }

        // Best Approach : Boyer–Moore Voting Algorithm.
        // time: o(n)
        // space : o(1)
        // Algorithm Says , for an party to win elections 
        // majority Party should have aleast one element more than all other parties

        // case 1: n : 3 = odd : [1, , 2]
        // for 1 or 2 to be the majority element , its count > (3/2) i.e 2
        // as no of counts 1 and 2 is one which will cancel each other sum = 0;
        // so either of count of 1 or 2 should be more than one 
        // hence : [1,1,2] or [1,2,2]


        // Best Approach : Boyer–Moore Voting Algorithm.
        // time: O(n)
        // space: O(1)

        // Algorithm intuition:
        // For a party to win elections,
        // majority party should have atleast one element more than all other parties combined.

        // ------------------------------
        // CASE 1: n = 3 (odd)
        // ------------------------------

        // Example 1:
        // [1,1,2]
        // count(1)=2, count(2)=1
        // 1 cancels 2 → one 1 still remains → majority = 1

        // Example 2:
        // [1,2,2]
        // count(2)=2, count(1)=1
        // 2 cancels 1 → one 2 still remains → majority = 2

        // Key Insight:
        // For n = 3 → majority > floor(3/2) = 1
        // So majority must appear atleast 2 times


        // ------------------------------
        // CASE 2: n = 5 (odd)
        // ------------------------------

        // Example 1:
        // [1,1,1,2,2]
        // (1,2) cancel
        // (1,2) cancel
        // 1 remains → majority = 1

        // Example 2:
        // [2,2,2,1,1]
        // (2,1) cancel
        // (2,1) cancel
        // 2 remains → majority = 2

        // Key Insight:
        // For n = 5 → majority > floor(5/2) = 2
        // So majority must appear atleast 3 times


        // ------------------------------
        // CASE 3: n = 4 (even)
        // ------------------------------

        // Example 1:
        // [1,1,2,2]
        // (1,2) cancel each other 
        // hence no majority elements

        // Example 1:
        // [1,1,1,2]
        // (1,2) cancel
        // remaining [1,1] → majority = 1

        // Example 2:
        // [2,2,2,1]
        // (2,1) cancel
        // remaining [2,2] → majority = 2

        // Key Insight:
        // For n = 4 → majority > floor(4/2) = 2
        // So majority must appear atleast 3 times


        // ------------------------------
        // CASE 4: n = 6 (even)
        // ------------------------------

        // Example 1:
        // [1,1,1,1,2,2]
        // (1,2) cancel
        // (1,2) cancel
        // remaining [1,1] → majority = 1

        // Example 2:
        // [2,2,2,2,1,1]
        // (2,1) cancel
        // (2,1) cancel
        // remaining [2,2] → majority = 2

        // Key Insight:
        // For n = 6 → majority > floor(6/2) = 3
        // So majority must appear atleast 4 times


        // ------------------------------
        // FINAL INTUITION
        // ------------------------------

        // Majority element count > n/2
        // So even after cancelling with all other elements,
        // it will still have leftover occurrences.

        // That leftover element is what Boyer–Moore tracks using:
        // candidate + count

        int party = 0;
        int sumOfVotes = 0;
        int n = nums.size();

        for (int i=0;i<n;i++) {
            if (sumOfVotes == 0) {
                party = nums[i];
                sumOfVotes++;
            } else if (party == nums[i]) {
                sumOfVotes++;
            } else {
                sumOfVotes--;
            }
        }

        return party;
        
    }
};