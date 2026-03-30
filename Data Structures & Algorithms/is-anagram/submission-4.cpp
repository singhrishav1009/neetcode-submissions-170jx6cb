class Solution {
public:
    bool isAnagram(string s, string t) {

    // 1st Approach
    // unordered_map <char,int> ans;

    // for (int i=0;i<s.length();i++){
    //     ans[s[i]]++;
    // }

    // for (int i=0;i<t.length();i++){
    //     ans[t[i]]--;
    // }

    // for(auto &p : ans) {
    //     // check the value not key
    //     if(p.second!=0){
    //         return false;
    //     }
    // }
    
    // return true;

    // 2nd approach

    // unordered_map <char,int> ans_s;
    // unordered_map <char,int> ans_t;

    // for (int i=0;i<s.length();i++){
    //     ans_s[s[i]]++;
    // }

    // for (int i=0;i<t.length();i++){
    //     ans_t[t[i]]++;
    // }

    // return ans_s == ans_t;


    // Best Approach

    if (s.length() != t.length()) {
        return false;
    }

    unordered_map <char,int> ans_s;
    unordered_map <char,int> ans_t;

    for (int i = 0; i < s.length(); i++) {
        ans_s[s[i]]++;
        ans_t[t[i]]++;
    }

    return ans_s == ans_t;

};

};
