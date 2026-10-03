class Solution {
public:
    bool isValid(string s) {
        stack<char> sk;
        for(char c :s){
            if(c == '{' || c == '[' || c == '('){
                sk.push(c);
            }
            else{
                if(sk.empty()){
                    return false;
                }
                if((c=='}' && sk.top() != '{') || (c == ']' && sk.top() != '[') || (c==')'&& sk.top()!='(')){
                    return false;
                }
                sk.pop();
            }
        }
        return sk.empty();

        
    }
};
