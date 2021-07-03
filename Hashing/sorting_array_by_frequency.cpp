#include<iostream>
#include<algorithm>
#include<unordered_map>
#define ll long long
using namespace std;

bool comp(const pair<ll,ll>&a,const pair<ll,ll>&b){
    if (a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}

int main()
 {
	ll t;
	cin>>t;
	while(t--){
	    ll i,n,maxx=0;
	    cin>>n;
	    ll a[n];
	    for(i=0;i<n;i++)    
	        cin>>a[i];
	    unordered_map<ll,ll>umap;
	    vector<pair<ll,ll>>vec;
	    for(i=0;i<n;i++){
	        umap[a[i]]+=1;
	    }
	    for(auto it=umap.begin();it!=umap.end();it++){
	        vec.push_back(make_pair(it->first,it->second));
	    }
	    sort(vec.begin(),vec.end(),comp);
	    for(auto x : vec){
	        for(i=0;i<x.second;i++)
	        {
	            cout<<x.first<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
