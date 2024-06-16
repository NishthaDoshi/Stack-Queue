class Solution {
public:
    bool isValid(string s) {
        stack<char> br1;
        // cout << br1.top();
        // return true;
        for (auto ch : s) {
            switch (ch) {
            case '(':
                br1.push('(');
                break;
            case '[':
                br1.push('[');
                break;
            case '{':
                br1.push('{');
                break;
            case ')':
                if (br1.empty() || br1.top() != '(')
                    return false;
                br1.pop();
                break;
            case ']':
                if (br1.empty() || br1.top() != '[')
                    return false;
                br1.pop();
                break;
            case '}':
                if (br1.empty() || br1.top() != '{')
                    return false;
                br1.pop();
                break;
            }
        }
        if (br1.empty())
            return true;
        return false;
    }
};
