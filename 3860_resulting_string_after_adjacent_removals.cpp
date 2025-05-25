class Solution {
public:
    string resultingString(string s) {
        stack<char> q;
        int n = s.size();
        if (n == 1)
            return s;
        q.push(s[0]);

        int i = 1;
        while (i < n) {
            if ( !q.empty() && (q.top() - s[i] == 1 || q.top() - s[i] == -1 ||
                (q.top() == 'z' && s[i] == 'a') || (q.top() == 'a' && s[i] == 'z')))  {
                q.pop();
                // for (auto i : q) {
                //     cout << "here 1" << i << endl;
                // }
            } else {

                q.push(s[i]);
                // for (auto i : q) {
                //     cout << "here 2" << i << endl;
                // }
            }
            i++;
        }
        string ans = "";
        // for (auto i : q) {
        //     cout << "here 3" << i << endl;
        // }
        while (!q.empty()) {
            char x = q.top();
            q.pop();
            ans += x;
        }
      
            reverse(ans.begin(), ans.end());
        
         
        return ans;
    }
};