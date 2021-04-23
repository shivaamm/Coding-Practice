long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
	    int sum=0;
	    for (int i = 0; i < n/2; i++) 
    { 
        sum -= (2 * arr[i]); 
        sum += (2 * arr[n - i - 1]); 
    } 
    return sum;
    
    ***********************************************************************
    
    // int sum=0;
    // int arr2[n];
    // sort(arr,arr+n);
    // int j=n-1;
    // int k=0;int count=0;
    // int i=0;
    
    // while(count<n)
    // {
    //     arr2[i]=arr[k];
    //     arr2[i+1]=arr[j];
    //     j--;
    //     k++;
    //     i+=2;
    //     count+=2;
        
    // }
    
    // for(int i=0;i<n-1;i++)
    // {
    //     sum+=abs(arr2[i]-arr2[i+1]);
        
    // }
    // sum+=abs(arr2[n-1]-arr2[0]);
    // return sum;
    
}
