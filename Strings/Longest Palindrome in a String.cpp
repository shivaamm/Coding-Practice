class Solution {
  public:
    string longestPalin (string s) {
        int n = s.size();

        int start = n;
        int ans = 0;

        for(int i = 0; i < n; i++){
            // odd case
            int l = i - 1;
            int r = i + 1;

            int cans = 1;

            while(l > -1 and r < n and s[l] == s[r]){
                cans += 2;
                ++r;
                --l;
            }

            if(cans > ans){
                ans = cans;
                start = l + 1;
            }
            else if(cans == ans and l + 1 < start){
                start = l + 1;
            }

            //even case
            l = i - 1;
            r = i;
            cans = 0;
            while(l > -1 and r < n and s[l] == s[r]){
                cans += 2;
                ++r;
                --l;
            }

            if(cans > ans){
                ans = cans;
                start = l + 1;
            }
            else if(cans == ans and l + 1 < start){
                start = l + 1;
            }
        }

        return s.substr(start, ans);
    }
};
