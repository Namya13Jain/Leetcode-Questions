//58 Length of Last Word
//level;easy
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int end=s.size()-1;
        /* if(s.length()==1) return 1;
        if(s.length()==0) return 0; */
        while(end>=0 && s[end]==' '){
            end--;
        } 
        while(end>=0 && s[end]!=' ') {
            len++;
            end--;
        }
        

        return len;
    }
};
