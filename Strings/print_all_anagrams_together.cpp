// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        // map<string, vector<string>> mp;
        // for(auto x: string_list){
        //     string k = x;
        //     sort(k.begin(), k.end());
        //     mp[k].push_back(x);
        // }
        // vector<vector<string>> ans;
        // for(auto x: mp){
        //     ans.push_back(x.second);
        // }
        // return ans;
        
        
        unordered_map<string,vector<string>> m;
       for(int i=0;i<string_list.size();i++)
       {
           string temp = string_list[i];
           sort(temp.begin(), temp.end());
           m[temp].push_back(string_list[i]);
       }
       
       vector<vector<string>> v;
       for(auto x : m)
       {
           v.push_back(x.second);
       }
       return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
