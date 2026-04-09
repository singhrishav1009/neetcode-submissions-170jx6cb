class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // NOTE:unordered_map is fast as it uses hashing algorithm by storing elements into diff bucket for faster lookup: o(1) but their sequence order is not guaranteed , it is random.
        // map is slow as it uses red black tree algorithm hence elements(indices) are stored in dictionary wise though not the insertion wise

        // 1st Approach : Wrong Approach
        // int n= strs.size();
        // unordered_map<char,int> m;

        // for(int i=0;i<n;i++){
        //     int strLength=strs[i].length();
        //     for(int j=0;j<strLength;j++){
        //         cout<<strs[i][j];
        //         m[strs[i][j]]++;
        //     }
        //     cout<<"\n";
        // }

        // string ans = "";
        // for(auto p:m){
        //     cout<<p.first<<"\n"<<p.second<<"\n";
        //     // if(p.second!=n)
        //     // return ans;
        //     // else{
        //         ans.push_back(p.first);
        //     // }
        // }

        // return ans;

        // 2nd Approach 
        
        int n=strs.size();
        string ans=strs[0];

        for (int i=1;i<n;i++){
            int j=0;
            while (j<ans.length()) {
                if (ans[j]!=strs[i][j] && j==0 ){
                    return "";
                } else if(ans[j]==strs[i][j] &&j < ans.length()){
                    j++;
                    continue;
                } else if(ans[j]!=strs[i][j] && j <= ans.length() ){
                    ans.pop_back();
                    j--;

                } else if(ans[j]!=strs[i][j] && j == ans.length() || j == strs[i].length()  ){
                    break;
                }  
            }
        }

        return ans;




        
    }
};