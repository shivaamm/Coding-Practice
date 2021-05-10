class Solution{
    public:
    string convert(string s, int n) {
        
        vector<string> pat(n);
        int i=0;
        while(i<s.size())
        {
            int j=0;
            while(i<s.size()&&j<n)
            {
                // cout<<"*";
                pat[j].push_back(s[i]);
                i++;
                j++;
            }
            j=n-2;
            while(i<s.size()&&j>0)
            {
            pat[j].push_back(s[i]);
            i++;
            j--;}
            //cout<<endl;
        }
        string ans="";
        for(int i=0;i<n;i++)
            ans+=pat[i];
        return ans;
        
    }
};
