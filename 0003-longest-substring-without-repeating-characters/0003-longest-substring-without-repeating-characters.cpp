class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans = 0;

        for(int i = 0; i < s.length(); i++) {

            bool seen[256] = {false};

            for(int j = i; j < s.length(); j++) {

                if(seen[(unsigned char)s[j]]) {
                    break;
                }

                seen[(unsigned char)s[j]] = true;

                if(j - i + 1 > ans) {
                    ans = j - i + 1;
                }
            }
        }

        return ans;
    }
};