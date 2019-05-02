class Solution {
public:
    string filter(string &email) {
        string ans = "";
        for(int i = 0; i < email.size(); ++i) {
            if(email[i] == '@') {
                while(i < email.size()) ans += email[i++];
                break;
            }
            if(email[i] == '.') {
                continue;
            }
            if(email[i] == '+') {
                while(email[i++] != '@');
                i -= 1;
                while(i < email.size()) {
                    ans += email[i++];
                } 
                break;
            } 
            ans += email[i];
        }
        return ans;
    }
    int numUniqueEmails(vector<string>& emails) {
        set<string> stash;
        for(auto &email : emails) {
            stash.insert(filter(email));
        }
        return stash.size();
    }
};
