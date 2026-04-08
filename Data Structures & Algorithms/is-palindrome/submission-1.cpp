class Solution {
public:
    bool isPalindrome(string s) {
        // common mistake 
        // '0' to '9' are characters, not integers
        // Their ASCII values are 48 to 57, NOT 0 to 9

        // After incrementing i or decrementing j, i still fall through and compare s[i] and s[j] in the same iteration
        // That can lead to wrong comparisons
        // example : ab_a

        // 1st Approach
        // int i=0;
        // int n = s.length();
        // int j=n-1;
        // transform(s.begin(), s.end(), s.begin(), ::tolower);

        // while(i<j) {
        //     if(!((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) && i<j) {
        //         i++;
        //         continue;
        //     }

        //     if(!((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9')) && i<j) {
        //         j--;
        //         continue;
        //     }
            
        //     if(s[i]==s[j] && i<j){
        //         i++;
        //         j--;
        //         continue;
        //     }

        //     if(s[i]!=s[j] && i<j){
        //         return false;
        //     }
        // }

        // return true;

        // 2nd Approach
        int i=0;
        int n = s.length();
        int j=n-1;

        while(i<j) {
            // is not alpha numeric
            if( ! ( (tolower(s[i])>='a' && tolower(s[i])<='z') || (tolower(s[i]) >='0' && tolower(s[i]) <='9') ) ) {
                i++;
                continue;
            }

            // is not alpha numeric
            if( ! ( (tolower(s[j])>='a' && tolower(s[j])<='z') || (tolower(s[j]) >='0' && tolower(s[j]) <='9') ) ) {
                j--;
                continue;
            }
            
            if(tolower(s[i])==tolower(s[j])) {
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
