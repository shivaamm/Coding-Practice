class Solution{


	public:
	int minNum(long long int arr[],int n)
	{
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    if(sum%2==1)
	    {
	        return 1;
	    }
	    else
	    {
	        return 2;
	    }
	}

		 

};
