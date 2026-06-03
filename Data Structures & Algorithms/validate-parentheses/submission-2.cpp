class Solution {
public:
    bool isValid(string s) {
        stack<char> parStack;
        unordered_map<char, char> parMap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for(char chr : s) {
            if (parMap.count(chr)) {
                if (!parStack.empty() && parStack.top() == parMap[chr]) {
                    parStack.pop();
                } else {
                    return false;
                }
            } else {
                parStack.push(chr);
            }
        }
        return parStack.empty();
    }
};
