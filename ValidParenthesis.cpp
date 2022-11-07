//20. valid paranthesis
//level:easy
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(st.empty())
             st.push(s[i]);

             else if(s[i]==')'){
                 if(st.top()!='(') return false;
                 st.pop();
             }

              else if(s[i]=='}'){
                 if(st.top()!='{') return false;
                 st.pop();
             }

              else if(s[i]==']'){
                 if(st.top()!='[') return false;
                 st.pop();
             }

             else st.push(s[i]);
        }
       if(st.empty()) return true;
       return false; 
    }
};
