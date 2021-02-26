class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       map<char, int> allowmp;
        int cnt=words.size();
        for(int i=0; i<allowed.size(); i++)
        {
            allowmp[allowed[i]]++;
        }
        for(int i=0; i<words.size(); i++)
        {
            for(char c: words[i])
            {
                if(allowmp.find(c)==allowmp.end()) //char is not in "allowed" string
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt; 
    }
};
