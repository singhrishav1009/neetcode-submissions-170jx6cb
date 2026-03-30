class Solution {
public:
    bool isAnagram(string s, string t) {

    // duplicae means Set 

    // unordered_set<char> ans1(s.begin(),s.end());
    // unordered_set<char> ans2(t.begin(),t.end());

    // if(ans1.size()!=ans2.size())
    // return true;

    // return false;

    map <char,int> ans;

    for (int i=0;i<s.length();i++){
        ans[s[i]]++;
    }

    for (int i=0;i<t.length();i++){
        ans[t[i]]--;
    }

    for (auto &p : ans) {
        if(p.second!=0) {
            return false;
        }
    }

    return true;

};

};
