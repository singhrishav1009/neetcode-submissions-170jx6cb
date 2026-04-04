class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // 1st Approach 
        // time : o(n)
        // space : o(n)
        // int n= nums.size();
        // int count=0;
        // vector<int> ans(n);

        // for(int i=0;i<n;i++){
        //     if(val!=nums[i]){
        //         ans[count]=nums[i];
        //         count++;
        //     }
        // }

        // nums=ans;

        // return count;
        

        // 2nd Approach : 2 pointers
        // 1st pointer i : which will iterates normally throughout the loop
        // 2nd pointer k : which mark the position in nums array to put the value nums[i] which are not equal to val and increment it.
        // put the element nums[i] in place of nums[k] if nums[i]!=val 
        // increment k
        // time : o(n)
        // space : o(1)

        int n =nums.size();
        int k=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k++]=nums[i];
            }
        }

        return k;

        // Best Approach : 3rd Approach
        // 2nd Approach : 2 pointers : 1st and last 
        // why not to put the unneccesary elements at the last 
        // swap the nums[i] element if equal to val with last element nums[n]
        // decrement n-- as one unneccesary already placed at the last 
        // but dont increment i++ what if swapped element equals val
        
        // int n =nums.size()-1;
        // int i=0;

        // while(i<=n){
        //     if(nums[i]==val){
        //         nums[i]=nums[n];
        //         nums[n--]=val;
        //     } else {
        //         i++;
        //     }
        // }

        // return n+1;


    }
};