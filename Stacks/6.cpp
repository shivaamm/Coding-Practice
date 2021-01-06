Question - https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/

Solution - (using stacks and without stacks)

# With Stacks

class Solution {
public:
    string removeDuplicates(string s) {
           stack<char>st;
           string res = "";
           for(int i = 0;i<s.length();i++)
           {
                   if(st.empty() || st.top() != s[i])
                           st.push(s[i]);
                   else
                           st.pop();
           }
           while(!st.empty())
           {
                   res+=st.top();
                   st.pop();
           }
           reverse(res.begin(),res.end());
return res;
    }
};

# Without Stacks

lass Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(int i = 0;i < s.length();i++){
            if(!ans.empty()){
                if(ans.back() == s[i]){ // if the last elemnt equals to current then pop it
                    ans.pop_back();
                }
                else{
                    ans.push_back(s[i]); //add elemts to string
                }
            }
            else{
                ans.push_back(s[i]);//if string is empty then add current charecter
            }
        }
        return ans;
    }
};
