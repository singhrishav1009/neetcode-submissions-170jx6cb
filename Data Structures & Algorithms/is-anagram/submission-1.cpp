class Solution {
public:
    bool isAnagram(string s, string t) {

    unordered_map <char,int> ans_s;
    unordered_map <char,int> ans_t;


    for (int i=0;i<s.length();i++){
        ans_s[s[i]]++;
    }

    for (int i=0;i<t.length();i++){
        ans_t[t[i]]++;
    }

    return ans_s == ans_t;

    // unordered_map<char, int> countS;
    // unordered_map<char, int> countT;
    // for (int i = 0; i < s.length(); i++) {
    //     countS[s[i]]++;
    //     countT[t[i]]++;
    // }
    // return countS == countT;

};

};
