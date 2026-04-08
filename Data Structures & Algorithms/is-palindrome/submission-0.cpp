class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n = s.length();
        int j=n-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(i<j) {
            if(!((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) && i<j) {
                i++;
                continue;
            }

            if(!((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9')) && i<j) {
                j--;
                continue;
            }
            
            if(s[i]==s[j] && i<j){
                i++;
                j--;
                continue;
            }

            if(s[i]!=s[j] && i<j){
                return false;
            }
        }

        return true;
        
    }
};
