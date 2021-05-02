class Solution{
  public:
    
    vector<int> duplicates(int a[], int n) {
   
    vector<int>ans;
    int i,flag=0;
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            flag=1;
            ans.push_back(a[i]);
            while(a[i]==a[i-1]){
                    i++;
                }
            }
        }
        if(flag==0){
            ans.push_back(-1);
        }
    
    return ans;
}
    
    
    //     vector<int> duplicates(int a[], int n) {
    //     // code here
    //     for (int i = 0; i < n; i++)
    //         a[ a[i] % n ] += n;
    //         /*
    //     for(int i = 0; i < n; i++)
    //     cout<< a[i ] << " ";
    //     */
    //     vector<int> ans;
    //     for (int i = 0; i < n; ++i)
    //     { 
    //         if (a[i] / n > 1)
    //             ans.push_back(i);
            
    //     }
    //     if(ans.empty())
    //     ans.push_back(-1);
    //     return ans;
    // }
    
    
    //     vector<int> duplicates(int a[], int n) {
    //     map<int,int> m;
    //     for(int i=0;i<n;i++){
    //         m[a[i]]++;
    //     }
    //     vector<int> v;
    //     for(auto i=m.begin();i!=m.end();i++){
    //         if(i->second>1)
    //             v.push_back(i->first);
    //     }
    //     if(v.size()>0)
    //         return v;
    //     v.push_back(-1);
    //     return v;
    // }
};


// vector<int> duplicates(int a[], int n) {
    
//     // code here
//     vector<int>v;
//     unordered_set<int>s;
//     unordered_set<int>dup;
//     int i;
//     int flag=0;
//     for(i=0;i<n;i++)
//     {
//         if(s.find(a[i])==s.end())
//             s.insert(a[i]);
//         else
//         {
//             flag=1;
//             dup.insert(a[i]);
//         }
//     }
//     unordered_set<int>:: iterator it;
//     if(flag==1)
//     {
//         for(auto it=dup.begin();it!=dup.end();it++)
//             v.push_back(*it);
//     }
//     if(flag==0)
//         v.push_back(-1);
//     sort(v.begin(),v.end());
//     return v;
// }


// void printDuplicates(int arr[], int n){
//     unordered_map<int, int> hash;
//     int i, f = 0;
//     for(i = 0; i < n; ++i){
//         if(hash[arr[i]] != -1){
//             ++hash[arr[i]];
//         }
//         if(hash[arr[i]] >= 2){
//             f = 1;
//             cout << arr[i] << " ";
//             hash[arr[i]] = -1;
//         }
//     }
    
//     if(f == 0)
//         cout << "-1";
// }
