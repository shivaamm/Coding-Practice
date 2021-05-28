//Function to check if there is a pair with the given sum in the array.
int sumExists(int arr[], int N, int sum)
{
    unordered_set<int> myMap;
           
      for ( int i=0; i< N; i++){
           
          if (myMap.find(sum - arr[i]) != myMap.end() )
                return true;
           
            myMap.insert(arr[i]);
           
      }
           
          return false;
    
    
    ***********************************************************************************
    
        // unordered_set<int> s;
        //   for(int i=0;i<N;i++){
        //       if(s.find(sum-arr[i])!=s.end()){
        //           return 1;
        //       }
        //       s.insert(arr[i]);
               
        //   }
        //   if(sum==0)
        //     return 1;
        //   else
        //     return 0;
        
        
      ***********************************************************************************
      
      
        //     map<int,int>hash;
        //   int i;
        //   for(i=0;i<N;i++)
        //   {
        //       hash[arr[i]]++;
        //   }
        //   int x;
        //   for(i=0;i<N;i++)
        //   {
        //       x=sum-arr[i];
        //       if(x!=arr[i] && hash.find(x)!=hash.end())
        //             return 1;
        //   }
        //   return 0;
}
