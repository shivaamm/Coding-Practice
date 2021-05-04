class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int z=arr[0];
	    for(int i=1;i<n;i++){
	        z=z^arr[i];
	    }
	    return z;
    }
};
