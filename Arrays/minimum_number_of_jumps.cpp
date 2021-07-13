class Solution{
  public:
    int minJumps(int arr[], int n){
        vector<int> steps(n,-1);
       steps[0] = 0;
       int covered = 1;
       for(int i=0;i<n-1;i++){
           if(steps[i] == -1) continue;
           while((covered <= i + arr[i]) && covered < n){
               steps[covered++] = steps[i]+1;
           }
       }
       return steps[n-1];
    }
};
