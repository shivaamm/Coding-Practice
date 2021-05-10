class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int>mp;
	   //int mp[100]={0};
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(mp[arr[i]+arr[j]])    // checking if any value exist in which is the sum of a + b elements
	                count++;
	        }
	    }
	    return count;
	}
};
