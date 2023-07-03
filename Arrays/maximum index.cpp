class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int i=0,j=n-1,diff=0;
        while(i<j){
            if(arr[i]<=arr[j]){
                diff=max(diff,j-i);
                i++;
                j=n-1;
            }else{
                j--;
            }
        }
        return diff;
    }

};
