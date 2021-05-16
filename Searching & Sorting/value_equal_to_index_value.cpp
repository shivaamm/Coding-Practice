class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int>v;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==i+1)
	            v.push_back(arr[i]);
	            f=1;
	    }
	    if(f!=1)
	        v.push_back(0);
	    return v;
	}
};
