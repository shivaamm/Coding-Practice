
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>st;
	   st.push_back(a[n-1]);                 // last element will always be a leader as it doesn't have any element to it's right
	    for(int i=n-2;i>=0;i--)                  // that's why we start from n-2
	    {
	        if(a[i]>=st.back())
	            st.push_back(a[i]);
	    }
	    reverse(st.begin(),st.end());
        return st;
    }
};

**********************************************************************
        // ll mx=a[n-1];
	   // vector<ll> v;
	   // v.push_back(a[n-1]);
	   // for(ll i=n-2;i>=0;i--)
	   // {
	   //     if(a[i]>=mx) v.push_back(a[i]);
	   //     mx=max(mx,a[i]);
	   // }
	    
	   // for(ll i=v.size()-1;i>=0;i--)
	   // {
	   // cout<<v[i]<<" ";
	   // }
	   
 ************************************************************************
	   
	   //vector<int> v;
	   // for(int j=0;j<n;j++)
	   // {
	   //     cin >> arr[j];
	   // }
	   // int max=INT_MIN;
	   // for(int j=n-1;j>=0;j--)
	   // {
	   //     if(arr[j]>max)
	   //         {
	   //             max=arr[j];
	   //             v.push_back(arr[j]);
	   //         }
	       
	   // }
	   // reverse(v.begin(),v.end());
	   // for(int j=0;j<v.size();j++)
	   // {
	   //     cout << v[j] << " ";
	   // }
	   
