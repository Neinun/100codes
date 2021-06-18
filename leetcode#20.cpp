class Solution {
public:
    bool isValid(string s) {
        stack<char> test;
        for(auto c:s)
        {
            if(c == '(' || c == '{' || c == '[')
                test.push(c);
            else
            {
                if(test.empty())
                    return false;
                if( c == ')' && test.top()!= '(')
                    return false;
                if( c == '}' && test.top()!= '{')
                    return false;
                if( c == ']' && test.top()!= '[')
                    return false;
                test.pop();
            }
        }
        return test.empty();
    }
};
