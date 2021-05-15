int check(string a,string b)
{
    map<char,int> m1,m2;
    for(int i=0;i<a.size();i++)
    {
        m1[a[i]]++;
        m2[b[i]]++;
        if(m1[a[i]]!=m2[b[i]])
        return 0;
    }
    return 1;
}

vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    vector<string> v;
       for(int i=0;i<dict.size();i++)
       {
           if(dict[i].size()!=pattern.size())
                continue;
           else
           {
               int x=check(dict[i],pattern);
               if(x==1)
               v.push_back(dict[i]);
           }
       }
       return v;
}
