class Solution {
public:
    string toLowerCase(string str) {
        int i=0;
        char c;
        string res;
          while (str[i])
          {
            c=str[i];
           res.push_back(tolower(c));
            i++;
          }
        return res;
    }
};

// using return ----------->>>>>>>>>>>

class Solution {
  public:
    string toLower(string S) {
    // int res=transform(S.begin(), S.end(), S.begin() ::tolower)
   
        int i=0;
        char c;
      while (S[i])
      {
        c=S[i];
        putchar (tolower(c));
        i++;
      }
    // return S;
    }
};
