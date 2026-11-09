class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>st;
       for(int i=0;i<s.length();i++){
        if(s[i]=='#' && !st.empty()) st.pop();
        else if(s[i]=='#' && st.empty()) continue;
        else st.push(s[i]);
       }
       string sa="";
       while(!st.empty()){
        sa +=st.top();
        st.pop();
       }
        for(int i=0;i<t.length();i++){
        if(t[i]=='#' && !st.empty()) st.pop();
        else if(t[i]=='#' && st.empty()) continue;
        else st.push(t[i]);
       }
       string ta="";
       while(!st.empty()){
        ta +=st.top();
        st.pop();
       }
       if(sa==ta) return true;
       else return false;
    }
};
