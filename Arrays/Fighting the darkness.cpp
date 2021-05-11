class Solution{   
public:
    int maxDays(int arr[],int n){
        sort(arr,arr+n);
        return arr[n-1];  // maximum in array will be the number of days it takes to reach darkness
    }
};
