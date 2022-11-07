//1323 Maximum69 Number
//level: easy
class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num);

        for(auto &a: numStr){
            if(a == '6'){
                a ='9';
                break;
            }
        }
    return stoi(numStr);
        
    }
};
