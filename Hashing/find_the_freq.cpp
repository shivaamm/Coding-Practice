int findFrequency(vector<int> v, int x){
//   unordered_map<int,int>mp;
//   for(int i=0;i<v.size();i++)
//   {
//       mp[v[i]]++;
//   }
//   int ans=0;
//   for(auto i:mp)
//   {
//       if(i.first==x)
//             ans=i.second;
//   }
//   return ans;

******************************************************

int count=0;
    
    for (int i=0; i<v.size(); i++)
    {
        if (v[i] == x)
        {
            count++;
        }
    }
    
    return count;
}
