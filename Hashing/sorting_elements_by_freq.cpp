// #include<iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// #define ll long long

// bool comp(const pair<ll,ll>&a,const pair<ll,ll>&b){
//     if (a.second==b.second)
//         return a.first<b.first;
//     return a.second>b.second;
// }

// int main()
//  {
// 	ll t;
// 	cin>>t;
// 	while(t--){
// 	    ll i,n,maxx=0;
// 	    cin>>n;
// 	    ll a[n];
// 	    for(i=0;i<n;i++)    
// 	        cin>>a[i];
// 	    unordered_map<ll,ll>umap;       // using Unordered map
// 	    vector<pair<ll,ll>>vec;            // using vector
// 	    for(i=0;i<n;i++){
// 	        umap[a[i]]+=1;
// 	    }
// 	    for(auto it=umap.begin();it!=umap.end();it++){
// 	        vec.push_back(make_pair(it->first,it->second));
// 	    }
// 	    sort(vec.begin(),vec.end(),comp);
// 	    for(auto x : vec){
// 	        for(i=0;i<x.second;i++)
// 	        {
// 	            cout<<x.first<<" ";
// 	        }
// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }


******************************************  Using MULTIMAP  **********************************************


#include<iostream>
#include<map>
#include<set>
#include<iterator>
#include<algorithm>
#include<cstring>
#include<climits>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
 {
	//code
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            cin>>a[i];
            
            map<int,int> hash;
            for(int i=0;i<n;i++)
                hash[a[i]]++;
            multimap<int,int> mm;
            for(auto it=hash.rbegin();it!=hash.rend();it++)
            {
                mm.insert(pair<int,int>(it->second,it->first));
            }
            for(auto it=mm.rbegin();it!=mm.rend();it++)
            {
                int x=it->first;
                while(x)
                {
                    cout<<it->second<<" ";
                    x--;
                }
            }
            cout<<endl;
        }
	return 0;
}
