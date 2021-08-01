class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        
        // First let's assume that the entire first string
        // is the common prefix.
        //
        std::string prefix = strs[0];
        
        // Now we iterate through the list of strings, and 
        // for each string, we see how much of it matches with
        // our prefix. The size of the prefix keeps decreasing.
        //
        for(int i = 1; i < strs.size(); ++i) {
            // As long as you don't find the prefix, keep decreasing
            // it's size.
            //
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
            }
            if(prefix.length() == 0) return "";
        }
        
        return prefix;
        
        
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////
      
        
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
    }
};
