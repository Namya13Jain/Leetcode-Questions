//1544. Make the String Great
//level:easy
//tc:0(n) sc: 0(n)
class Solution {
public:
    string makeGood(string s) {
        string ans;
         int flag=1;
        while(flag){
            string temp;
            int n=s.size();
            int i=0;
        for(i=0;i<n-1;i++){
            if(s[i]-'a'==s[i+1]-'A'||s[i]-'A'==s[i+1]-'a')i++;
            else temp.push_back(s[i]);
        }
        if(i<n){
        temp.push_back(s[i]);
        }
        if(temp.size()==n||temp.size()==0){
            ans=temp;
            flag=0;
        }
        else{
            s=temp;
        }
      }
        return ans;
    }
    
};
