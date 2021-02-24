class Solution {
public:
    int scoreOfParentheses(string S) {
      int count=0,res=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='(')
                count++;
            else
            {
                count--;
                if(S[i-1]=='(')
                    res+= 1 << count;    //imp
            }
        }
        return res;
    }
};

// Stack Solution

class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> stack;
        int res = 0;
        for (auto c : S) {
            if (c == '(') {
                stack.push(res);
                res = 0;
            }
            else {
                int prev = stack.top();
                stack.pop();
                res += prev + max(res, 1);
            }
        }
        return res;
    }
};
