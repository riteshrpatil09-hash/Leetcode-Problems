class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
        for(int i=0; i<s.length(); i++){
            bool found = false;
            for(int j=0; j<ans.length(); j++){
                if(s[i]==ans[j]){
                    found = true;
                    break;
                }
            }    
             if(found)
                continue;

            
            while(!ans.empty() && ans.back() > s[i]) {

                bool again = false;

                
                for(int j = i + 1; j < s.length(); j++) {
                    if(ans.back() == s[j]) {
                        again = true;
                        break;
                    }
                }

                if(again) {
                    ans.pop_back();
                }
                else {
                    break;
                }
            }

            ans += s[i];
        }
        return ans;
    }
};