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
