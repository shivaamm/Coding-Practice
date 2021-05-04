class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	   // sort(arr,arr+n);
    //     int i=0,j=n-1,flag=0;
    //     while(i<j)
    //     {   
    //         if((arr[i]+arr[j])==x)
    //          {   
    //             flag=1;
    //             break;
    //          }
    //         else if((arr[i]+arr[j])>x)
    //                 j--;
    //         else if((arr[i]+arr[j])<x)
    //                 i++;
    //     }
    //     if(flag==1)
    //         return 1;
    //     else
    //         return 0;
    
    
        int l=0;
	    int m=n-1;
	    sort(arr,arr+n);
	    while(l<m){
	        if(arr[l]+arr[m]==x){
	            return 1;
	        }
	        else if(arr[l]+arr[m]<x){
	            l++;
	        }
	        else{
	            m--;
	        }
	    }
	    return 0;
	}
};


Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16
Example 2:

Input:
N = 5, X = 10
Arr[] = {1, 2, 4, 3, 6}
Output: Yes
Explanation: Arr[2] + Arr[4] = 4 + 6 = 10
