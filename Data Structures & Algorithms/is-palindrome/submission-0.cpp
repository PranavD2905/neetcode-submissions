class Solution {
public:
    bool isPalindrome(string s) {

        string ans = "";
        for (auto ch : s) {
        // if the current character
        // is an alphabet
        if (isalnum(ch))
            ans += tolower(ch);
        }

        int n = ans.size();
        int start = 0;
        int end = n-1;

        while(start < end){
            if(ans[start] == ans[end]){
                start++;
                end--;

            }
            else return false;
        }
        return true;
    }
};
