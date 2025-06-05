class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        for(auto i:s){
            if(i=='(' || i=='{' || i=='[' )st.push(i);
            else if(i==')' && (st.empty() ||st.top()!='(') )return false;
            else if(i==')' && st.top()=='(')st.pop();
            else if(i=='}' && (st.empty() ||st.top()!='{'))return false;
            else if(i=='}' && st.top()=='{')st.pop();
            else if(i==']' && (st.empty() || st.top()!='['))return false;
            else if(i==']' && st.top()=='[')st.pop();
            else return false;
        }
        return st.empty();
    }
};